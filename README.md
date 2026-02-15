# TinyML-Made-Easy — Companion Repository

This repository contains example code and pre-trained TinyML models that accompany the book, "TinyML Made Easy: Hands-On Machine Learning on Arduino for Beginners".
This is not a replacement for the book. It is a companion resource designed to reduce friction and increase success.

Supported Hardware (This repository has been tested with):
-Arduino Nano 33 BLE Sense Lite
-Arduino Nano 33 BLE Sense Rev2 (IMU-based examples)
⚠️ Note
Chapter 2 uses only the accelerometer (IMU), so it works on both Lite and Rev2 boards.
Later chapters in the book may recommend additional sensors available on Rev2.

# Chapter 2: First TinyML App (Overview)
The goal of this chapter is to help readers run their first TinyML application (FirstTinyMLApp) in minutes, without needing to train a model or understand the full TinyML workflow upfront.
FirstTinyMLApp
-Task: Gesture recognition (shake detection)
-Model: Binary classifier (still vs shake)
-Sensor: Accelerometer (IMU)
-Framework: Edge Impulse (model already trained)
What it does:
-Reads accelerometer data
-Runs TinyML inference on-device
-Prints prediction probabilities
-Turns the onboard LED ON when a “shake” gesture is confidently detected

This example is intentionally simple and reliable.

FirstTinyMLApp Directory Structure
-A pre-trained TinyML model (exported as an Arduino library)
-A ready-to-run Arduino sketch used in Chapter 2

FirstTinyMLApp Directory Structure
tinyml-made-easy-companion/
│
├── arduino/
│   └── FirstTinyMLApp/
│       └── FirstTinyMLApp.ino
│
├── models/
│   └── shake_model_arduino.zip
│
├── docs/
│   ├── quickstart.md
│   └── troubleshooting.md
│
└── README.md




Quick Start (Chapter 2)
1. Install the model library

Open Arduino IDE

Go to Sketch → Include Library → Add .ZIP Library…

Select the ZIP file in:

models/shake_model_arduino.zip


Restart Arduino IDE if needed

2. Open the example sketch

Open:

arduino/FirstTinyMLApp/FirstTinyMLApp.ino


Select:

Board: Arduino Nano 33 BLE

Port: Your connected device

3. Upload and run

Upload the sketch

Open Serial Monitor

Set baud rate to 115200

You should see output similar to:

still: 0.92   shake: 0.08


Shake the board and observe:

shake probability increases

Built-in LED turns ON after confident detection

Troubleshooting

If something doesn’t work, check:

docs/troubleshooting.md

That Arduino_LSM9DS1 library is installed

That the correct board and port are selected

That the Edge Impulse library ZIP was imported correctly

Most issues are setup-related, not model-related.

About the Model

Trained using Edge Impulse

Quantized (int8) for microcontrollers

Optimized for:

Small size

Fast inference

Stable behavior

Designed for teaching and learning, not benchmarking

If you want to train your own model:

See Chapters 4–6 of the book

Versioning and Stability

This repository uses stable, versioned releases.

Code changes are conservative

Examples prioritize reliability over experimentation

Breaking changes are avoided

If you are following the book, use the release that matches your book edition.

License

This repository is provided for educational use.

Code may be reused in personal and academic projects

Attribution is appreciated

See LICENSE file for details

Feedback and Issues

If you encounter:

build errors

unclear instructions

hardware-specific issues

Please open an issue with:

your board type

Arduino IDE version

error message (copy/paste)

This helps improve the learning experience for everyone.

Final Note

If this repository helped you get your first TinyML application running, then it has done its job.

For deeper understanding, debugging, and real projects, the book provides the full context.

Happy building 🚀
