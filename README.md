# Arduino Projects & Embedded Systems Experiments

A collection of Arduino experiments and hardware-interfacing exercises I worked through while developing practical embedded-systems skills.

The repository documents my hands-on exploration of microcontrollers, digital and analog I/O, sensors, displays, motors, communication protocols, and basic hardware-software integration.

## Purpose

My background is primarily in software engineering, and I created this repository as part of my transition toward embedded systems and low-level software development.

The exercises allowed me to move beyond purely software-based applications and gain practical experience with:

* Microcontroller programming
* Digital and analog I/O
* Sensors and actuators
* Serial communication
* I2C communication
* LCD and LED displays
* Motors and motor control
* IR remote control
* RFID
* Real-time clock modules
* Basic hardware troubleshooting and debugging

## Repository Structure

### Basic Arduino Experiments

The repository includes introductory experiments covering:

* LED blinking
* Digital inputs and outputs
* RGB LED control
* Buzzers and sound generation
* Servo motors
* LCD displays
* Serial Monitor
* Analog input
* Photocells

### Sensors and Modules

I also worked through examples involving several common embedded-system components:

* HC-SR04 ultrasonic sensor
* DHT11 temperature and humidity sensor
* Analog joystick
* IR receiver
* HC-SR501 PIR motion sensor
* Water-level sensor
* Sound sensor
* MPU-6050 accelerometer/gyroscope
* QMI8658C motion sensor
* DS1307/DS3231 real-time clock
* RC522 RFID module

### Displays and Output Devices

Examples include:

* 16×2 LCD displays
* MAX7219 LED dot matrix
* Seven-segment displays
* 74HC595 shift register
* Multiple digital LEDs

### Motors and Control

The repository also contains exercises involving:

* DC motors
* L293D motor driver
* Stepper motors
* Rotary encoder control
* IR-remote-controlled stepper motor

## My Contribution

The repository contains a mixture of guided learning examples and my own experimentation.

For the guided examples, my contribution was primarily hands-on implementation and testing: assembling the required circuits, configuring the Arduino environment, uploading the sketches, observing hardware behaviour, troubleshooting connection or configuration issues, and modifying parameters/code to understand how the components behaved.

I also created and organized several of the experiments in the repository, including the LCD display, autoscroll, and basic LED experiments.

I have kept the original attribution/comments in examples derived from Arduino and starter-kit documentation rather than presenting those examples as entirely original code.

## Technologies and Tools

### Programming

* C/C++ (Arduino programming)
* Arduino Sketches

### Hardware

* Arduino-compatible microcontroller board
* LEDs
* Push buttons and digital input components
* LCD displays
* Sensors
* Servo and stepper motors
* DC motor and L293D driver
* RFID reader
* IR receiver
* MPU-6050
* RTC modules
* 74HC595 shift register
* Seven-segment displays

### Libraries / Interfaces

Depending on the experiment, the repository uses Arduino libraries and interfaces including:

* `LiquidCrystal`
* `Wire` / I2C
* `Servo`
* `Stepper`
* `IRremote`
* `Keypad`
* `DHT`
* `LedControl`
* RFID libraries

## Testing Approach

The projects were primarily tested on physical Arduino hardware rather than only through simulation.

For each experiment, I generally followed this process:

1. Assemble the circuit according to the component's wiring requirements.
2. Configure the Arduino board and required library in the Arduino IDE.
3. Compile the sketch and resolve compilation/library issues.
4. Upload the program to the microcontroller.
5. Observe the physical output or sensor readings.
6. Use the Serial Monitor where applicable to inspect sensor values and program behaviour.
7. Change input conditions or program parameters and verify the resulting hardware behaviour.

For example:

* LCD experiments were verified by observing text, cursor, display, and scrolling behaviour.
* Sensor experiments were verified by changing the physical input and observing the resulting readings.
* Motor experiments were verified by observing direction, speed, and stopping behaviour.
* The MPU-6050 experiment was verified through accelerometer, gyroscope, and temperature readings printed through the Serial Monitor.
* The IR-controlled stepper motor experiment was tested by sending commands from an IR remote and observing the corresponding motor rotation.

## Learning Outcomes

Through these exercises, I developed practical familiarity with:

* Writing firmware for microcontrollers
* Working with GPIO
* Reading sensor data
* Controlling physical actuators
* Using serial debugging
* Interfacing peripherals over I2C
* Working with external Arduino libraries
* Understanding the relationship between software instructions and physical hardware
* Debugging both software and hardware issues

## Next Steps

This repository represents an early stage of my embedded-systems learning journey. My goal is to build on these fundamentals with more structured work in:

* C/C++ for embedded systems
* Microcontroller architecture
* Embedded communication protocols
* Interrupts and timers
* Memory management
* Real-time systems
* Hardware debugging
* Embedded Linux
* Automotive and IoT systems
* Embedded software testing and validation
