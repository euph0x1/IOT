# IoT Hands-on Projects

This repository contains a small set of Arduino and ESP8266-based IoT experiments created during hands-on learning sessions. Each project focuses on a different concept in embedded systems and smart device control.

## Included Projects

- [sketch_feb28a_prog1](./sketch_feb28a_prog1) — Flame detection alarm using a flame sensor and buzzer.
- [sketch_feb28b_prog2](./sketch_feb28b_prog2) — Bluetooth-controlled LED demo using an HC-05 module.
- [sketch_feb28c_prog3](./sketch_feb28c_prog3) — ESP8266 smart relay project integrated with Sinric Pro for home automation control.

## Project Overview

### 1. Flame Detection Alert
The flame sensor sketch reads the sensor input and triggers a buzzer whenever flame or a similar light source is detected. It also prints the sensor state to the Serial Monitor for debugging.

### 2. Bluetooth LED Control
This sketch uses a Bluetooth module to receive commands and switch LEDs on or off. It is designed as a simple IoT control example and can be paired with a Bluetooth terminal app or custom controller.

### 3. Smart Relay Control with Sinric Pro
This ESP8266 sketch connects to Wi-Fi and communicates with Sinric Pro to control relays through a smart-home app or automation platform. It demonstrates how to wire a device to the cloud and use online control endpoints.

## Hardware Requirements

Depending on the project, you may need:

- Arduino Uno / Nano or ESP8266 NodeMCU
- Flame sensor module
- Buzzer
- LEDs
- Resistors
- HC-05 Bluetooth module
- 4-channel relay module
- Jumper wires
- Breadboard
- USB cable for programming

## Software Requirements

- Arduino IDE
- Required board packages:
  - Arduino AVR Boards for Uno/Nano-based sketches
  - ESP8266 Board Package for NodeMCU-based sketches
- Libraries used by the ESP8266 project:
  - `ESP8266WiFi`
  - `SinricPro`

## Setup Instructions

### 1. Clone the Repository

```bash
git clone <your-repository-url>
cd iot_handson
```

### 2. Open the Desired Sketch

Open the `.ino` file in the corresponding project folder using the Arduino IDE.

### 3. Select the Correct Board and Port

- For the flame and Bluetooth examples: choose the Arduino board you are using.
- For the Sinric Pro example: select the ESP8266 board and the correct COM port.

### 4. Upload the Code

Compile and upload the sketch to the board.

## Usage

### Flame Sensor Example
- Open the Serial Monitor.
- Observe the sensor values.
- When the sensor detects flame-like conditions, the buzzer turns on.

### Bluetooth Example
- Pair the HC-05 module with your device.
- Send commands like `5`, `1`, `6`, `2`, `7`, `3`, `9`, and `0` to control the LEDs.
- The sketch maps these values to LED state changes.

### Sinric Pro Example
- Update the Wi-Fi SSID and password.
- Replace the Sinric Pro app key, secret, and device IDs with your own values.
- Power the ESP8266 and connect it to Wi-Fi.
- Use the Sinric app or web dashboard to control the connected relays.

## Important Security Note

The Sinric Pro example in [sketch_feb28c_prog3](./sketch_feb28c_prog3/sketch_feb28c_prog3.ino) contains example Wi-Fi credentials and app credentials. Before using this project in a real environment or publishing it publicly, replace these values with your own secure credentials.

## Notes

This project is intended for learning and experimentation. It is not production-hardened hardware or software, and should be adapted for your actual circuit design and deployment environment.

## License

This project does not currently include a license file. If you plan to publish it publicly on GitHub, add an appropriate license such as MIT or Apache 2.0.
