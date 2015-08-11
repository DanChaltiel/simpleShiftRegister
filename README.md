# simpleShiftRegister
A very simple way to understand how Shift Registers work, using SPI library on an Arduino.
The code will light every LED, one after another, with a 200µs delay.

Material :
-
- Arduino Duemilanove motherboard with Atmega chip plugged in
- 1 Serial In Parallel Out shift register (74hc595)
- 8 red LEDs
- 8 330 Ohm resistors

SPI library
-
The SPI library used to communicate with the SR always needs specific pins to work with :
- digital pin 11 as MOSI (master out - slave in) --> plugged to SR pin 14, the serial input sata
- digital pin 13 as SCK --> plugged to SR pin 11, the shift register clock input
- any digital pin (I used pin 10) --> plugged to SR pin 12, the storage register clock input, also called "latch"

Breadboard configuration (using Fritzing software)
-
![breadboard configuration](https://raw.github.com/Anaroyondo/simpleShiftRegister/master/simpleShiftRegister.png)


74hc595 configuration diagrams
-
![74hc595 configuration](http://i.stack.imgur.com/idHuy.png)

![74hc595 configuration](https://farm4.staticflickr.com/3384/4562719993_5ece0f189a_o.jpg)
