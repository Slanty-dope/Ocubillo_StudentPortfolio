Activity 5 

This activity demonstrates how Arduino can communicate with an external program using serial communication. A Python script is used to send commands from a computer to the Arduino, allowing the user to control multiple LEDs through a text-based menu.

On the Arduino side, LEDs are connected to designated digital pins. The Arduino listens for incoming serial commands and responds by turning specific LEDs ON or OFF based on the received character. Each command corresponds to a particular LED color or group of LEDs.

On the computer side, a Python program establishes a serial connection with the Arduino. Once connected, it displays a simple menu in the terminal where the user can choose different options such as turning individual LEDs on or off, activating all LEDs, or turning all LEDs off. The selected option is sent as a single-character command to the Arduino through the serial port.

The Python script handles serial initialization, user input, and command transmission, while the Arduino handles hardware control and signal execution. This separation shows how software running on a computer can interact with embedded hardware in real time.

This activity helps learners understand the basics of serial communication, the interaction between Arduino and external applications, and how higher-level programs can be used to control microcontroller-based systems.
