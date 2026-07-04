# ESP32 7-Segment Display Control using Blynk IoT

## Overview

This project demonstrates how to control a single 7-segment display remotely using an ESP32 and the Blynk IoT platform. A slider widget in the Blynk dashboard sends a value between **0 and 9** to the ESP32, which displays the corresponding digit on the 7-segment display in real time.

---

## Features

- ESP32 Wi-Fi connectivity
- Remote control using Blynk IoT
- Displays digits from **0 to 9**
- Real-time communication
- Serial Monitor debugging
- Simple and beginner-friendly project

---

## Components Required

- ESP32 Development Board
- Single 7-Segment Display (Common Cathode)
- 7 × 220Ω Resistors
- Jumper Wires
- USB Cable
- Wi-Fi Connection
- Blynk IoT Platform

---

## Hardware Connections

| 7-Segment Pin | ESP32 GPIO |
|----------------|------------|
| Segment A | GPIO 13 |
| Segment B | GPIO 12 |
| Segment C | GPIO 14 |
| Segment D | GPIO 27 |
| Segment E | GPIO 26 |
| Segment F | GPIO 32 |
| Segment G | GPIO 33 |

---

## Software Requirements

- Arduino IDE
- ESP32 Board Package
- Blynk Library
- WiFi Library

---

## Installation

1. Install the ESP32 Board Package in Arduino IDE.
2. Install the **Blynk** library.
3. Open the `ESP32_7Segment_Blynk.ino` file.
4. Enter your Blynk Authentication Token and Wi-Fi credentials.
5. Select the ESP32 board and upload the code.
6. Open the Blynk dashboard and move the slider to display digits.

---

## Blynk Configuration

### Template Name

```
7 SEGMENT
```

### Virtual Pin

```
V0
```

### Widget

- Slider

### Slider Settings

| Property | Value |
|----------|-------|
| Datastream | V0 |
| Minimum | 0 |
| Maximum | 9 |
| Step | 1 |

---

## Working Principle

1. ESP32 connects to the Wi-Fi network.
2. ESP32 establishes a connection with the Blynk Cloud.
3. The Blynk slider sends a number (0–9) through **Virtual Pin V0**.
4. ESP32 receives the value using the `BLYNK_WRITE(V0)` function.
5. The corresponding segments are activated to display the selected digit.
6. The received value is also printed on the Serial Monitor.

---

## Project Structure

```
7Segment-Blynk/
│
├── ESP32_7Segment_Blynk.ino
├── README.md
├── ESP32_7Segment_Blynk_Report.pdf
├── circuit_diagram.png
├── blynk_input_0.png
├── blynk_input_1.png
├── ...
├── blynk_input_9.png
├── simulation_output_0.png
├── simulation_output_1.png
├── ...
└── simulation_output_9.png
```

---

## Output

### Blynk Dashboard

- Slider value changes from **0 to 9**.

### Serial Monitor

```
Received from Blynk: 0
Received from Blynk: 1
Received from Blynk: 2
...
Received from Blynk: 9
```

### 7-Segment Display

The display updates instantly to show the selected digit.

---

## Applications

- Digital Counters
- Smart Home Displays
- IoT-Based Numeric Displays
- Industrial Monitoring Systems
- Educational Embedded Systems
- Scoreboards

---

## Future Improvements

- Support for multiple 7-segment displays
- Countdown timer
- Digital clock
- Sensor value display
- Mobile notifications using Blynk
- OLED/LCD integration

---

## Author

**Sachin P**

Electrical and Electronics Engineering Student

---

## License

This project is licensed under the MIT License.

---

## Repository

This repository contains:
- Arduino source code (`.ino`)
- Project report (`PDF`)
- Circuit diagram
- Blynk dashboard screenshots
- Wokwi simulation outputs
- Project documentation
