# TinyML-From-Scratch — Companion Repository

This repository contains example code and pre-trained TinyML models that accompany the book, "TinyML From Scratch: Hands-On Machine Learning on Arduino for Beginners".
This is not a replacement for the book. It is a companion resource designed to reduce friction and increase success.

Supported Hardware (This repository has been tested with):
* Arduino Nano 33 BLE Sense Lite
* Arduino Nano 33 BLE Sense Rev2 (IMU-based examples)

⚠️ Note: Chapter 2 uses only the accelerometer (IMU), so it works on both Lite and Rev2 boards. Later chapters in the book may recommend additional sensors available on Rev2.

# Chapter 2: First TinyML App (Overview)
The goal of this chapter is to help readers run their first TinyML application (FirstTinyMLApp) in minutes, without needing to train a model or understand the full TinyML workflow upfront.

FirstTinyMLApp
- Task: Gesture recognition (shake detection)
- Model: Binary classifier (still vs shake)
- Sensor: Accelerometer (IMU)
- Framework: Edge Impulse (model already trained)

What it does:
- Reads accelerometer data
- Runs TinyML inference on-device
- Prints prediction probabilities
- Turns the onboard LED ON when a “shake” gesture is confidently detected

This example is intentionally simple and reliable (designed for teaching and learning, not benchmarking).

FirstTinyMLApp Directory Structure
- A pre-trained TinyML model (exported as an Arduino library)
- A ready-to-run Arduino sketch used in Chapter 2

⚠️ Note: If this repository helped you get your first TinyML application running, then it has done its job. For deeper understanding, debugging, and real projects, the book provides the full context.
Happy building 🚀

FirstTinyMLApp Directory Structure
tinyml-from-scratch-companion/
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

If you want to train your own model: See Chapters 4–6 of the book. If you are following the book, use the release that matches your book edition.

# License
This repository is provided for educational use. Code may be reused in personal and academic projects. Attribution is appreciated. See LICENSE file for details.

# Feedback
If you encounter:
- build errors
- unclear instructions
- hardware-specific issues
- Please open an issue with:
  - your board type
  - Arduino IDE version
  - error message (copy/paste)
This helps improve the learning experience for everyone.


