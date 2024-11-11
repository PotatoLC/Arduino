/*
This Arduino program controls the blinking of an LED connected to digital pin 8, using the on_off function to customize the number of 
blinks and delay time between on and off states. In the setup(), pin 8 is set as a digital output. In the loop(), the LED blinks three 
times with 500 ms intervals (fast), waits 2500 ms, then blinks three times with 1000 ms intervals (slow), waits another 2500 ms, and 
repeats the pattern. This on-off cycle at different speeds runs continuously.

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
  // Put your setup code here, to run once:
  pinMode(8, OUTPUT);
}

void loop() {
  on_off(8, 3, 500);
  delay(2500);
  on_off(8, 3, 1000);
  delay(2500);
  on_off(8, 3, 500);
  delay(2500);
}

// Function that takes 3 parameters: the pin number where the LED is connected,
// the number of times the code should repeat, and the delay time between turning on and off.

void on_off(int pin, int times, int sleep) {
  for (int i=0; i < times; i++) {
    digitalWrite(pin, HIGH);
    delay(sleep);
    digitalWrite(pin, LOW);
    delay(sleep);
  }
}
