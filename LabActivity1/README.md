# Activity 1: Working with Signals – Running Light Circuit

## Overview
This activity demonstrates basic **digital signal control** using an Arduino by creating a **running light circuit**. Multiple LEDs are controlled through digital output pins and activated in sequence using timed delays.

The LEDs turn **ON one by one** from pin **12 down to pin 8**, then turn **OFF one by one** in the same order, with a **1-second delay** between each action.

---

## Hardware Used
- Arduino Uno (or compatible board)
- 5 LEDs
- 5 resistors (220Ω–330Ω)
- Breadboard and jumper wires

---

## Pin Assignment
| Arduino Pin | LED |
|------------|-----|
| 8–12       | LEDs |

Each LED is connected to one Arduino digital pin with a resistor to limit current.

---

## How the Code Works
- In the `setup()` function, digital pins **8 to 12** are configured as **OUTPUT** pins.
- Inside the `loop()` function:
  - The LEDs are turned **ON sequentially** from pin **12 to pin 8** using `digitalWrite(HIGH)` with a `delay(1000)`.
  - After all LEDs are ON, they are turned **OFF sequentially** from pin **12 to pin 8** using `digitalWrite(LOW)`, again with a 1-second delay.
- The loop repeats continuously, creating a running light effect.

---

## Key Arduino Functions Used
- `pinMode()` – sets a pin as OUTPUT
- `digitalWrite()` – turns an LED ON or OFF
- `delay()` – controls the timing between LED changes

---

## Learning Outcome
This activity helps learners understand how Arduino controls digital signals, how timing affects output behavior, and how multiple components can be controlled using simple logic and loops.
