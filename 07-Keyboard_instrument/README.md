# 07-keyboard\_instrument

In this project, we'll be constructing something called a **resistor** ladder.
A resistor ladder is a series of repeating resistors.

This configuration will allow you to simulate the function of any number of digital inputs using just a single analog input. What you do is to hook up a bunch of switches in parallel. Each of these switches will have a resistor of unique vales connected to it. All this will be connected to the 0 analog pin.

Each switch can be attached to a key which will play different tones of sound when pressed. Pressing any combination of keys will produce unique sounds.

## Project Files
1. Picture of the circuit ![picture](./07-Keyboard_instrument.png)
2. Circuit Schematic [pdf](07-Keyboard_instrument.pdf)
3. Parts List [Parts list](07-Keyboard_instrument.csv)

## What to consider

This circuit can be applied when you're out of digital pins. You can adjust the resistors in the way you want,a also change the number of buttons. The number of buttons represents the number of custom digital pins you have.
