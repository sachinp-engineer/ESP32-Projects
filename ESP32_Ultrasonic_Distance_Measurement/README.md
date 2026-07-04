# ESP32 Distance Measurement using Ultrasonic Sensor, I2C LCD & Blynk IoT

## Overview

This project demonstrates a real-time distance measurement system using an ESP32, HC-SR04 Ultrasonic Sensor, 16×2 I2C LCD, and the Blynk IoT platform. The measured distance is displayed locally on the LCD and remotely on the Blynk dashboard through Wi-Fi.

---

## Features

- Real-time distance measurement
- 16×2 I2C LCD display
- Blynk IoT cloud integration
- Serial Monitor output
- Wi-Fi connectivity using ESP32
- Easy to build and modify

---

## Components Required

- ESP32 Development Board
- HC-SR04 Ultrasonic Sensor
- 16×2 I2C LCD Display
- Jumper Wires
- USB Cable
- Wi-Fi Network
- Blynk IoT Platform

---

## Hardware Connections

| ESP32 Pin | Component |
|-----------|-----------|
| GPIO 5 | HC-SR04 TRIG |
| GPIO 18 | HC-SR04 ECHO |
| GPIO 21 | LCD SDA |
| GPIO 22 | LCD SCL |
| VIN | LCD VCC & HC-SR04 VCC |
| GND | LCD GND & HC-SR04 GND |

---

## Software Requirements

- Arduino IDE
- ESP32 Board Package
- Blynk Library
- LiquidCrystal_I2C Library
- WiFi Library

---

## Installation

1. Install the ESP32 Board Package in Arduino IDE.
2. Install the required libraries:
   - Blynk
   - LiquidCrystal_I2C
3. Open `ESP32_Ultrasonic_LCD_Blynk.ino`.
4. Update your Wi-Fi credentials and Blynk Authentication Token if required.
5. Select the ESP32 board.
6. Upload the code.

---

## Working Principle

1. The ESP32 sends a trigger pulse to the HC-SR04 sensor.
2. The sensor measures the echo time.
3. The distance is calculated using:

```
Distance = (Duration × 0.0343) / 2
```

4. The calculated distance is:
   - Displayed on the I2C LCD
   - Printed on the Serial Monitor
   - Sent to the Blynk dashboard (Virtual Pin V0)

---

## Project Structure

```
ESP32-Ultrasonic-Distance-Measurement/
│
├── ESP32_Ultrasonic_LCD_Blynk.ino
├── README.md
├── Report.pdf
├── circuit_diagram.png
├── simulation_output.png
└── blynk_dashboard.png
```

---

## Output

### LCD Display

```
Distance:
209.81 cm
```

### Serial Monitor

```
Distance: 209.81 cm
```

### Blynk Dashboard

A Gauge widget connected to **Virtual Pin V0** displays the measured distance in real time.

---

## Applications

- Obstacle Detection
- Smart Parking Systems
- Water Tank Level Monitoring
- Robotics
- Industrial Automation
- Distance Monitoring Systems

---

## Future Improvements

- Add buzzer for obstacle alerts
- Mobile notifications using Blynk
- OLED display support
- Data logging to cloud
- Email and SMS alerts
- Multiple sensor integration

---

## Author

**Sachin P**

Electrical and Electronics Engineering Student

---

## License

This project is licensed under the MIT License.

