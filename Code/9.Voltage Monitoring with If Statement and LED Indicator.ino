/*
This Arduino program reads an analog signal from pin A0, calculates its voltage, and uses an if statement to 
decide whether to turn on a red LED connected to pin 10 when the voltage exceeds 4.0V. The calculated voltage is also 
displayed in the Serial Monitor. This program demonstrates how to monitor analog inputs and respond with a digital output.

Required Materials:
  - Arduino Uno board
  - USB power cable
  - Potentiometer or analog sensor
  - 220-ohm resistor
  - Red LED
  - Breadboard and connecting wires
*/


const float V_ARDUINO = 5.0;
float analog_read = 0.0;
float voltage = 0.0;
const int analog_pin = A0;
float read_val = 0.0;
const int SLEEP = 200;
const int RED_PIN = 10;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(analog_pin, INPUT);
  pinMode(RED_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  read_val = analogRead(analog_pin);
  voltage = (V_ARDUINO * read_val) / 1023.0;
  Serial.println("[!] Lectura --> Hay [" + String(voltage) + "] volts");
  delay(SLEEP);

  if (voltage > 4.0) digitalWrite(RED_PIN, HIGH);
  else digitalWrite(RED_PIN, LOW);
}
