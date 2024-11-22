/*
This Arduino program uses a potentiometer connected to pin A0 to control the brightness of a 
blue LED connected to pin 6. The program reads the analog value from the potentiometer (0-1023),
maps it to a brightness level for the LED (0-255), and adjusts the LED brightness in real time. The raw
potentiometer reading and the corresponding brightness value are printed to the Serial Monitor.

Required Materials:
  - Arduino Uno board
  - USB power cable
  - Blue LED
  - 220-ohm resistor
  - Potentiometer
  - Breadboard and connecting wires
*/

const int ANALOG_PIN = A0;
const int SLEEP = 200;
const int BLUE_PIN = 6;
int brightness = 0;
int read = 0;


void setup() {
  pinMode(ANALOG_PIN, INPUT);
  pinMode(BLUE_PIN, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  read = analogRead(ANALOG_PIN);
  brightness = map(read, 0, 1023, 0, 255);
  Serial.println(String(read) + " ---> " + String(brightness));
  analogWrite(BLUE_PIN, brightness);
  delay(SLEEP);

}
