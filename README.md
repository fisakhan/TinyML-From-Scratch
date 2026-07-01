# TinyML From Scratch: Hands-On TinyML and Edge AI
<img width="1024" height="1536" alt="front_cover" src="https://github.com/user-attachments/assets/300e21ad-f024-497f-afd1-7ac5b076783f" />

Welcome to the official companion repository for **TinyML From Scratch: Hands-On TinyML and Edge AI** by Asif Khan, PhD. 

This repository contains all the production-ready code, datasets, pre-trained TinyML models, firmware components, and deployment pipelines discussed throughout the book. This is not a replacement for the book. It is a companion resource designed to reduce friction and increase success. It is designed to take you to confidently running optimized, stable machine learning models locally on hardware. 

---
<!--
## 📖 About the Book
The future of artificial intelligence is thriving on the edge, running locally on hardware that fits in the palm of your hand, even on your thumb. This book bridges the gap between isolated machine learning theory and hardware-constrained embedded programming. 

Bypassing heavy math, deep theory and complex code, this guide focuses strictly on the end-to-end engineering workflow using the **Arduino Nano 33 BLE Sense** ecosystem and **Edge Impulse**.
-->

## 🛒 Where to Buy

Available on Amazon worldwide (e.g., amazon.com, amazon.co.uk, amazon.nl, amazon.de, amazon.ca, etc.)  
  **[Buy on Amazon (Paperback)](https://www.amazon.nl/-/en/Asif-Khan/dp/B0H2BLFP59/)**


---

## 🛠️ Repository Architecture & Code Files
The repository is systematically aligned with the book chapters. <!--Each directory contains fully documented code blocks and projects meant to be explored alongside the text.-->

## 🚀 Getting Started

To follow the practical engineering applications and step-by-step tutorials detailed in this book, you will need to configure a foundational hardware and software ecosystem. 

### 1. Hardware Checklist
* **Microcontroller:** **Arduino Nano 33 BLE Sense (Recommended)**. This specific board is selected because it integrates multiple onboard sensors natively, allowing you to focus immediately on edge data collection without wiring complex external circuits. This repository has been tested with:
  * Arduino Nano 33 BLE Sense Lite
  * Arduino Nano 33 BLE Sense Rev2
* **USB Cable:** A high-quality Micro-USB cable that explicitly **supports data transfer** (not a standard charge-only cable).
* **Host Machine:** A development computer running Windows, macOS, or Linux.
* **Mobile Device:** A smartphone (iOS or Android) used for the mobile Edge AI.

### 2. Software Stack
* **Arduino IDE:** Required for writing, compiling, and flashing your deployment code to the physical microcontroller.
* **Edge Impulse Account:** A free developer account on the Edge Impulse Studio platform to orchestrate data collection, feature generation, and digital model profiling.
* **Web Browser:** Google Chrome or Microsoft Edge (highly recommended for seamless WebUSB/WebBLE data ingestion from your hardware) or FireFox.
* **C++ IDE:** IDE of your choice to write C++ code.

### 3. Quickstart Environment Setup
To clone this companion repository and prepare your workspace, execute the following commands in your terminal:
```bash
# Clone the repository
git clone [https://github.com/fisakhan/TinyML-From-Scratch.git](https://github.com/fisakhan/TinyML-From-Scratch.git)

# Navigate to the repository root
cd TinyML-From-Scratch
# TinyML-From-Scratch — Companion Repository

If you are following the book, use the release that matches your book edition.
```

---
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

<br>
## About the Author
* **[Linkedin](https://www.linkedin.com/in/dr-asifkhan/)**
* **[Website](https://sites.google.com/view/asif-website/home?authuser=0)**
