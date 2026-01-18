Activity 1 – Working with Signals (Running Light Circuit)

This activity introduces basic Arduino digital signal control by creating a running light circuit using LEDs. The goal is to understand how the Arduino sends HIGH and LOW signals to output pins and how delays affect the behavior of electronic components.

Five LEDs are connected to Arduino pins 8 to 12. The program turns the LEDs ON one by one starting from pin 12 down to pin 8. After all LEDs are ON, the program turns them OFF one by one in the same order. Each step has a delay of one second, making the running light effect clearly visible.

The `setup()` function is used to configure pins 8 to 12 as OUTPUT pins so they can control the LEDs. The `loop()` function contains the main logic of the program. It continuously runs two sequences: the first sequence turns the LEDs ON using `digitalWrite(HIGH)`, and the second sequence turns them OFF using `digitalWrite(LOW)`. The `delay(1000)` function controls the timing between each LED action.

This activity helps learners understand how Arduino controls digital outputs, how loops are used to repeat actions, and how timing functions create visual patterns in electronic circuits.
