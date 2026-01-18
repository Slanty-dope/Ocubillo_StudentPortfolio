# Activity 6

This activity demonstrates bidirectional serial communication between an Arduino and a Python program. Unlike one-way control, this activity highlights how both the Arduino and the computer can send and receive data, allowing real-time interaction between hardware and software.

On the Arduino side, multiple LEDs are connected to designated digital pins. The Arduino sends single-character signals through the serial port and listens for incoming numeric commands. A separate header file is used to organize pin definitions and constants, making the code cleaner and easier to manage.

On the computer side, a Python program establishes a serial connection with the Arduino and continuously listens for incoming data. When the Python script receives a specific character (such as R, G, or B), it responds by sending a corresponding numeric command back to the Arduino through the serial port.

The Python script handles serial initialization, continuous data monitoring, and command transmission, while the Arduino handles LED control and hardware execution. This back-and-forth communication demonstrates how software applications can actively respond to embedded system signals in real time.

This activity helps learners understand the fundamentals of serial communication, bidirectional data exchange, and the integration of Python applications with Arduino-based hardware systems.
