Activity 4 

This activity demonstrates a basic temperature monitoring system using a thermistor and an LED as a visual alert. The Arduino continuously reads temperature data and reacts when the temperature reaches a defined threshold.

A thermistor is connected to analog pin A0 and is used to measure temperature. The analog reading is converted into resistance and then calculated into degrees Celsius using the Beta parameter equation. The calculated temperature value is displayed in the Serial Monitor for monitoring purposes.

When the temperature reaches or exceeds 50°C, the system activates a blinking LED connected to pin 8. The blinking behavior indicates that the temperature has crossed the critical threshold. The LED continues blinking until the system receives a command from the user.

The Serial Monitor allows user interaction with the system. When the word "stop" is sent through the Serial Monitor, the LED blinking stops immediately, and the LED is turned off. This demonstrates basic serial communication and manual control over system behavior.

This activity helps learners understand how analog sensor data is converted into meaningful values, how threshold-based conditions work, and how Arduino can respond to both sensor input and user commands.
