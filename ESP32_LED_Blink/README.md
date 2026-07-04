# ESP32 LED Blink

## Overview

The ESP32 LED Blink project is a beginner-friendly embedded systems application that demonstrates how to control an LED using the GPIO pins of an ESP32 development board. The program alternately turns the LED ON and OFF at one-second intervals, providing a simple introduction to digital output programming using the Arduino IDE.

---

## Features

- LED blinking using ESP32 GPIO
- Simple and easy-to-understand Arduino code
- Beginner-friendly embedded systems project
- Demonstrates digital output control
- Suitable for learning ESP32 programming fundamentals

---

## Components Required

- ESP32 Development Board
- LED
- 220 Ω Resistor
- Breadboard
- Jumper Wires
- USB Cable

---

## Software Requirements

- Arduino IDE
- ESP32 Board Package
- USB Driver (if required)

---

## Circuit Diagram

Place the circuit diagram image inside the `Circuit_Diagram` folder.

```
Circuit_Diagram/
└── Circuit_Diagram.png
```

---

## Working Principle

1. The ESP32 initializes GPIO23 as an output pin.
2. The LED connected to GPIO23 is turned ON.
3. The program waits for one second.
4. The LED is turned OFF.
5. The program waits for another second.
6. The process repeats continuously, creating a blinking effect.

---

## Project Structure

```
01_LED_Blink/
│
├── Arduino_Code/
│   └── ESP32_LED_Blink.ino
│
├── Circuit_Diagram/
│   └── Circuit_Diagram.png
│
├── Output/
│   ├── LED_ON.png
│   └── LED_OFF.png
│
├── Report/
│   └── ESP32_LED_Blink_Report.pdf
│
└── README.md
```

---

## Output

- LED turns ON for 1 second.
- LED turns OFF for 1 second.
- The blinking cycle repeats continuously.

---

## Applications

- Learning ESP32 programming
- Understanding GPIO control
- Embedded systems education
- IoT fundamentals
- Hardware testing and debugging

---

## Future Improvements

- Control LED using a push button
- Adjust blinking speed with a potentiometer
- Control LED remotely using Blynk
- Add multiple LEDs with different blinking patterns

---

## Technologies Used

- ESP32
- Arduino IDE
- Embedded C++
- GPIO Programming

---

## Author

**Sachin P**

Electrical and Electronics Engineering Student

---

## License

This project is licensed under the MIT License.
