/*
  FirstTinyMLApp.ino
  Chapter 2 companion example for TinyML Made Easy

  Hardware: Arduino Nano 33 BLE Sense Lite (also works on Rev2 for IMU use)
  Model: Edge Impulse (quantized) IMU classifier
  Labels: still / shake

  What it does:
  - Reads accelerometer (X,Y,Z)
  - Fills an input buffer the size expected by the model
  - Runs inference periodically
  - Prints probabilities to Serial Monitor
  - Turns on the built-in LED when "shake" is confidently detected
*/

#include <Arduino_LSM9DS1.h>
#include <shake_inferencing.h>
#include "edge-impulse-sdk/dsp/numpy.hpp"

// Convert accelerometer readings from "g" to "m/s^2"
#define CONVERT_G_TO_MS2    9.80665f

// Clamp outlier spikes (in g) to reduce noise
#define MAX_ACCEPTED_RANGE  2.0f

// Confidence threshold for acting on a class
#define SHAKE_THRESHOLD     0.80f

// Simple smoothing: require N consecutive "shake" detections
#define CONSECUTIVE_REQUIRED 2

// Edge Impulse input buffer
static float features[EI_CLASSIFIER_DSP_INPUT_FRAME_SIZE];

// Running index into the features buffer
static size_t feature_ix = 0;

// Consecutive shake counter for smoothing
static int shake_count = 0;

void setup() {
  Serial.begin(115200);
  while (!Serial);

  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);

  if (!IMU.begin()) {
    Serial.println("ERROR: IMU initialization failed.");
    while (1);
  }

  Serial.println("TinyML Made Easy - FirstTinyMLApp");
  Serial.println("Model: still vs shake");
  Serial.println("Move the board to see predictions.\n");
}

void loop() {
  float ax, ay, az;

  // Read accelerometer when available
  if (!IMU.accelerationAvailable()) {
    return;
  }

  IMU.readAcceleration(ax, ay, az);

  // Clamp and convert to m/s^2 to match typical training expectations
  ax = constrain(ax, -MAX_ACCEPTED_RANGE, MAX_ACCEPTED_RANGE) * CONVERT_G_TO_MS2;
  ay = constrain(ay, -MAX_ACCEPTED_RANGE, MAX_ACCEPTED_RANGE) * CONVERT_G_TO_MS2;
  az = constrain(az, -MAX_ACCEPTED_RANGE, MAX_ACCEPTED_RANGE) * CONVERT_G_TO_MS2;

  // Fill the features buffer in X, Y, Z order
  features[feature_ix++] = ax;
  features[feature_ix++] = ay;
  features[feature_ix++] = az;

  // If buffer is full, run inference
  if (feature_ix >= EI_CLASSIFIER_DSP_INPUT_FRAME_SIZE) {
    feature_ix = 0;

    ei_impulse_result_t result = {0};

    //signal_t signal;
    //signal.total_length = EI_CLASSIFIER_DSP_INPUT_FRAME_SIZE;
    //signal.get_data = &raw_feature_get_data;
    //EI_IMPULSE_ERROR res = run_classifier(&signal, &result, false);

    signal_t signal;
    int err = numpy::signal_from_buffer(features, EI_CLASSIFIER_DSP_INPUT_FRAME_SIZE, &signal);
    if (err != 0) {
      Serial.println("ERROR: signal_from_buffer failed.");
      return;
    }
      
    EI_IMPULSE_ERROR res = run_classifier(&signal, &result, false);

    if (res != EI_IMPULSE_OK) {
      Serial.println("ERROR: run_classifier failed.");
      return;
    }

    // Print classification probabilities
    float p_still = 0.0f;
    float p_shake = 0.0f;

    for (size_t i = 0; i < EI_CLASSIFIER_LABEL_COUNT; i++) {
      const char* label = result.classification[i].label;
      float value = result.classification[i].value;

      // Capture probabilities by label name (robust to label order)
      if (strcmp(label, "still") == 0) p_still = value;
      if (strcmp(label, "shake") == 0) p_shake = value;
    }

    Serial.print("still: ");
    Serial.print(p_still, 3);
    Serial.print("   shake: ");
    Serial.println(p_shake, 3);

    // Simple stability logic: threshold + consecutive confirmations
    if (p_shake >= SHAKE_THRESHOLD) {
      shake_count++;
    } else {
      shake_count = 0;
    }

    if (shake_count >= CONSECUTIVE_REQUIRED) {
      digitalWrite(LED_BUILTIN, HIGH);
    } else {
      digitalWrite(LED_BUILTIN, LOW);
    }

    Serial.println();
  }
}
