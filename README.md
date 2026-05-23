# TinyML From Scratch: Hands-On TinyML and Edge AI
<img width="1024" height="1536" alt="front_cover" src="https://github.com/user-attachments/assets/300e21ad-f024-497f-afd1-7ac5b076783f" />

Welcome to the official companion repository for **TinyML From Scratch: Hands-On TinyML and Edge AI (First Edition)** by Asif Khan, PhD. 

This repository contains all the production-ready code, datasets, firmware components, and deployment pipelines discussed throughout the book. It is designed to take you from absolute zero to confidently running optimized, stable machine learning models locally on hardware.

---

## 📖 About the Book
The future of artificial intelligence is thriving on the edge, running locally on hardware that fits in the palm of your hand, even on your thumb. This book bridges the gap between isolated machine learning theory and hardware-constrained embedded programming. 

Bypassing heavy math, deep theory and complex code, this guide focuses strictly on the end-to-end engineering workflow using the **Arduino Nano 33 BLE Sense** ecosystem and **Edge Impulse**.

### 🛒 Where to Buy
* **[Buy on Amazon (Paperback)]([https://www.amazon.com/dp/B0H2BLFP59](https://www.amazon.nl/-/en/Asif-Khan/dp/B0H2BLFP59/ref=sr_1_1?crid=30BC76NEQH0S8&dib=eyJ2IjoiMSJ9.xQxY1Ji4lOr9_bFzrCEH6Tfwi8PfhavwJe8L0RoB3Ck.f3LYzU6X8SAh590gltcaBKdPprwktvs375Cf7GK7QtE&dib_tag=se&keywords=tinyml+from+scratch&qid=1779526744&sprefix=tinyml+from+scratch%2Caps%2C95&sr=8-1))** * **[Read the Author Profile & Research](https://www.saxion.edu/)**

---

## 🛠️ Repository Architecture & Code Files
The repository is systematically aligned with the book chapters. Each directory contains fully documented code blocks and projects meant to be explored alongside the text.

```text
.
├── .github/               # Repository configuration and issue templates
├── assets/                # Architecture diagrams and media
├── Chapter_02_First_App/  # Verification scripts and your first working inference
├── Chapter_03_Sensors/    # Data collection and window management templates
├── Chapter_04_Training/   # Edge Impulse basics
├── Chapter_05_Training/   # Edge Impulse model configuration manifests
├── Chapter_06_Arduino/    # Arduino-specific deployment code and model wrappers
├── Chapter_07_Cpp_Lib/    # Raw optimized C++ inference libraries
├── Chapter_08_Reliable/   # Confidence thresholds and time-smoothing pipelines
├── Chapter_09_Efficiency/ # Memory profiling and benchmarking tools
├── Chapter_10_Fusion/     # Multi-axis gesture recognition sensor fusion code
└── Chapter_11_Smartphone/ # Mobile Edge AI implementation examples
```
## 🚀 Getting Started

[cite_start]To follow the practical engineering applications and step-by-step tutorials detailed in this book, you will need to configure a foundational hardware and software ecosystem[cite: 52]. 

### 1. Hardware Checklist
* [cite_start]**Microcontroller:** **Arduino Nano 33 BLE Sense (Recommended)**[cite: 54]. [cite_start]This specific board is selected because it integrates multiple onboard sensors natively, allowing you to focus immediately on edge data collection without wiring complex external circuits[cite: 58]. 
* [cite_start]**USB Cable:** A high-quality Micro-USB cable that explicitly **supports data transfer** (not a standard charge-only cable)[cite: 55].
* [cite_start]**Host Machine:** A development computer running Windows, macOS, or Linux[cite: 56].
* [cite_start]**Mobile Device:** A smartphone (iOS or Android) used for the mobile Edge AI scaling benchmarks in Chapter 11[cite: 57, 121, 122].

### 2. Software Stack
* [cite_start]**Arduino IDE:** Required for writing, compiling, and flashing your deployment code to the physical microcontroller[cite: 63].
* [cite_start]**Edge Impulse Account:** A free developer account on the Edge Impulse Studio platform to orchestrate data collection, feature generation, and digital model profiling[cite: 64].
* [cite_start]**Web Browser:** Google Chrome or Microsoft Edge (highly recommended for seamless WebUSB/WebBLE data ingestion from your hardware)[cite: 65].

### 3. Quickstart Environment Setup
[cite_start]To clone this companion repository and prepare your workspace, execute the following commands in your terminal[cite: 67, 68]:
```bash
# Clone the repository
git clone [https://github.com/fisakhan/TinyML-From-Scratch.git](https://github.com/fisakhan/TinyML-From-Scratch.git)

# Navigate to the repository root
cd TinyML-From-Scratch
:
:
;
;
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


