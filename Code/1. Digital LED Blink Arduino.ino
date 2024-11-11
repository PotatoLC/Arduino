/*
This Arduino program makes an LED blink on pin 13. In the setup(), it configures the pin as output, and in 
the loop(), it turns the LED on and off every 70 milliseconds in a continuous cycle. The pin is defined as 
digital because it can only have two possible states: 1 (on) and 0 (off).
*/

/*
Required Materials:
  Computer
  Arduino IDE
  Arduino Uno board
  USB power cable
*/

void setup() {
  pinMode(13,OUTPUT);
}


void loop() {
  digitalWrite(13,HIGH);
  delay(70);
  digitalWrite(13, LOW);
  delay(70);

}
