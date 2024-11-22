/*
This Arduino program reads the voltage from an analog input pin (A0) and converts it into a voltage value.  
The calculated voltage is displayed on the Serial Monitor.  
It demonstrates how to use analog-to-digital conversion (ADC) on Arduino to measure voltages.

Required Materials:
  - Arduino Uno board
  - USB power cable
  - Potentiometer or sensor with analog output
  - Breadboard and connecting wires
*/


const int analogPin = A0;
float analogVal = 0;
const int sleep = 500;
float voltage = 0.0;
const float VOLTAGE_ARDUINO = 5.0;

void setup() {
  pinMode(analogPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  analogVal = analogRead(analogPin);                 // Read the analog value (0 to 1023)
  voltage = (analogVal * VOLTAGE_ARDUINO) / 1023.0;  // Convert to voltage (0V to 5V)
  Serial.println(voltage);                           // Print the voltage to the Serial Monitor
  delay(sleep);
}
