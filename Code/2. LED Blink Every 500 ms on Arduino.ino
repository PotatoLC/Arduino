/*
This Arduino program makes an LED connected to digital pin 8 blink. In the setup() function, pin 8 is configured as 
a digital output. In the loop() function, the LED turns on (setting the pin to high) and stays on for 500 milliseconds; 
then it turns off (setting the pin to low) and stays off for another 500 milliseconds. This 500 ms on/off cycle repeats continuously, making the LED blink.

Required Materials:
  Computer
  Arduino IDE
  Arduino Uno board
  USB power cable
  330-ohm resistor
  LED
  Breadboard
*/

void setup() {
  pinMode(8, OUTPUT);
}

void loop() {
  digitalWrite(8, HIGH);
  delay(500);
  digitalWrite(8, LOW);
  delay(500);
}
