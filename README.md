>ESP32-CAM Smart Security Camera with PIR Motion Detection & Telegram Alerts
This is a DIY smart security camera system using an ESP32-CAM module and a PIR motion sensor (HC-SR501). When motion is detected, the ESP32-CAM takes a photo and sends it to your Telegram bot. You can also access the live stream from the camera over Wi-Fi.

>Features
Detects motion using PIR sensor

Sends photo alerts to Telegram instantly

Live video streaming via ESP32-CAM IP

Works on battery (2 × 18650 Li-ion)

Simple and affordable security project

Great for beginners and makers

>Components Required
ESP32-CAM Module

PIR Motion Sensor (HC-SR501)

FTDI Programmer / ESP32-CAM USB module

2 × 18650 Li-ion Batteries + Battery Holder

LM2596S DC-DC Buck Converter (5V output)

Breadboard or Custom PCB

JST Connectors (optional)

Screws and Spacers

>How It Works
When motion is detected, the PIR sensor triggers the ESP32-CAM.

The ESP32-CAM captures a photo.

The image is sent to your Telegram chat using the Telegram Bot API.

You can also open the camera’s IP address in a browser to view the live stream.

>Getting Started
Connect all components as shown in the circuit diagram.

Flash the Arduino code to ESP32-CAM using programmer module.

Set your Wi-Fi SSID, password, Telegram bot token, and chat ID in the code.

Power the setup using 2 × 18650 batteries or any 5V power source.

Receive photo alerts on Telegram when motion is detected.

📂 Files in This Repo
ESP32-CAM-Telegram.text – ESP32-CAM CODE

circuit_diagram.png – Wiring diagram

README.md – This file

📺 Full Tutorial Video
Check out the full step-by-step guide on YouTube:
👉 Watch Video
