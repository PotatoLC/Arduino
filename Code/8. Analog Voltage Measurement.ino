/*
Title: Analog Voltage Measurement and Display

This Arduino program reads an analog signal from pin A0, calculates the corresponding voltage,  
and displays the result on the Serial Monitor in volts. It uses a constant to represent the Arduino's reference voltage  
(typically 5V for most boards). This example is useful for monitoring analog signals like sensors or potentiometers.

Required Materials:
  - Arduino Uno board
  - USB power cable
  - Potentiometer or analog sensor
  - Breadboard and connecting wires
*/

const int analogPin = A0;
float V_out = 0; 
const int sleep = 500;
float voltage = 0.0;
const float VOLTAGE_ARDUINO = 5.0;

void setup() {
  pinMode(analogPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  V_out = analogRead(analogPin);
  voltage = (V_out * VOLTAGE_ARDUINO) / 1023.0;
  Serial.println("[+] Reading --> Voltage is [" + String(voltage) + "] Volts");
  delay(sleep);
}
