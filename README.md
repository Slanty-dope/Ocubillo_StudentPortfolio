Activity 3 – Fire Alarm Simulation Using Sensors

This activity simulates a basic fire alarm system using Arduino sensors. The system monitors temperature and light intensity, and triggers an alarm when a defined heat threshold is reached, representing a possible fire condition.

A thermistor is used to measure temperature, while a light-dependent resistor (LDR) is used to sense light intensity. When the temperature exceeds the set threshold and the light level also meets the defined condition, a buzzer connected to the Arduino is activated as an alarm.

The Arduino continuously reads analog values from the thermistor and LDR pins. The temperature value is calculated from the thermistor reading, while the light level is obtained directly from the LDR sensor. These values are displayed through the Serial Monitor for observation and debugging.

When the measured temperature reaches or exceeds the specified temperature threshold, the Arduino activates the buzzer by sending a HIGH signal to the alert pin. The buzzer turns ON and OFF with short delays, creating an audible alarm effect. If the conditions are not met, the buzzer remains OFF.

This activity demonstrates how Arduino can be used for basic safety system simulations, combining analog sensor readings, conditional logic, and digital output control to respond to environmental changes.
