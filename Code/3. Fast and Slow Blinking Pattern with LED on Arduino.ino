/*
This code implements a blinking pattern for a LED connected to pin 8 of the Arduino, alternating between fast and slow on/off sequences.

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
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(8, HIGH); 
  delay(700);
  digitalWrite(8, LOW);
  delay(700);
  digitalWrite(8, HIGH); 
  delay(700);
  digitalWrite(8, LOW);
  delay(700);  
  digitalWrite(8, HIGH); 
  delay(700);
  digitalWrite(8, LOW);
  delay(700);

  delay(1200);

  digitalWrite(8, HIGH); 
  delay(1500);
  digitalWrite(8, LOW); 
  delay(1500); 
  digitalWrite(8, HIGH); 
  delay(1500);
  digitalWrite(8, LOW); 
  delay(1500);
  digitalWrite(8, HIGH); 
  delay(1500);
  digitalWrite(8, LOW);
  delay(1500);

  delay(1200);

  digitalWrite(8, HIGH); 
  delay(700);
  digitalWrite(8, LOW);
  delay(700);
  digitalWrite(8, HIGH); 
  delay(700);
  digitalWrite(8, LOW);
  delay(700);  
  digitalWrite(8, HIGH); 
  delay(700);
  digitalWrite(8, LOW);
  delay(700);
}
