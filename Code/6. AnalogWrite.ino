/*
This Arduino program gradually increases the brightness of a yellow LED connected to pin 9 using PWM (Pulse Width Modulation).  
The brightness starts at 0 and increases in steps of 15 until it reaches the maximum value of 255.  
After completing one cycle, the LED turns off, and the program waits before restarting.

Required Materials:
  - Arduino Uno board
  - USB power cable
  - Yellow LED
  - 330-ohm resistor
  - Breadboard and connecting wires
*/

const int YELLOW_LED = 9;
const int MAX_BRIGHTNESS = 255;
const int sleep = 100;
const int reset = 1000;

void setup() {
  pinMode(YELLOW_LED, OUTPUT);

}

void loop() { 
  int brightness = 0;
  while (brightness <= 255) {
    analogWrite(YELLOW_LED, brightness);
    delay(sleep);
    brightness += 15;
  }

  digitalWrite(YELLOW_LED, LOW);
  delay(reset); 

}
