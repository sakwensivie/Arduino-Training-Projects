# 03-Love\_O\_Meter Project


This project focuses on getting information from analog sensors. THis can be done by using the A0 to A5 pins on
the arduino board. the pin records values which varies from 0-1023 which maps unto 0-5 volts.



This project also makes use of the serial monitor to report values that show what is going on
in the program when it is running on the board.


Because the sensor values doesn't actually read the real values of the physical measurement, it has to be
calibrated to show the actual values in the correct units. The program does just that and shows the values
on the serial monitor.
