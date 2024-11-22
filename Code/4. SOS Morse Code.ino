/*
This Arduino program uses an LED connected to digital pin 8 to signal "SOS" in Morse code.  
Morse code represents SOS as three dots (...), three dashes (---), and three dots (...).  

The program defines helper functions `dot()` and `dash()` to create the respective patterns.  
Between letters, a short pause (`SPACE`) is added, and after the entire message,  
a longer pause (`RESET`) occurs before repeating the sequence.  

Required Materials:
  - Arduino Uno board
  - USB power cable
  - 330-ohm resistor
  - LED 
  - Breadboard and connecting wires
*/

const int GREEN_LED = 8;
const int SPACE = 900;
const int RESET = 3200;
const int DOT = 350;
const int DASH = 700;

void setup() {
  // put your setup code here, to run once:
  pinMode(GREEN_LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  //  Desired message: SOS --> ... --- ...

  dot(3);  // ...
  delay(SPACE);
  dash(3);  // ---
  delay(SPACE);
  dot(3);  // ...
  delay(RESET);
}

void dot(int times) {
  for (int i = 0; i < times; i++) {
    digitalWrite(GREEN_LED, HIGH);
    delay(DOT);
    digitalWrite(GREEN_LED, LOW);
    delay(DOT);
  }
}

void dash(int times) {
  for (int i = 0; i < times; i++) {
    digitalWrite(GREEN_LED, HIGH);
    delay(DASH);
    digitalWrite(GREEN_LED, LOW);
    delay(DASH);
  }
}
