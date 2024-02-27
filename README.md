# Bluetooth Control App

This project is a Python application for controlling devices via Bluetooth. It provides a graphical user interface (GUI) for discovering nearby Bluetooth devices and sending commands to them. The app is designed to control the luminosity of an LED connected to a pin on the board using the GUI. Additionally, it serves as a proof of concept for the simple implementation of using an ESP32 microcontroller.
## Features

- Discover nearby Bluetooth devices
- Display a list of discovered devices
- Send commands to control devices (e.g., turning an LED on/off)

## Dependencies

- Python 3.x
- `bluetooth` library
- `customtkinter` library
- `tkinter` library

## Usage

1. Run the Python script `bluetooth_control_app.py`.
2. Click on the "Discover Devices" button to find nearby Bluetooth devices.
3. Select the desired device from the list.
4. Use the "Turn On LED" and "Turn Off LED" buttons to send commands to control the device.

## Installation

1. Clone the repository:

   ```bash
   $ git clone https://github.com/your_username/bluetooth_control_app.git
   $ cd bluetooth_control_app

2. Install the required libraries
  
    ```bash
    $ pip install bluetooth
    $ pip install customtkinter
