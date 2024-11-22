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
float V2 = 0;                   
const int sleep = 500;          

void setup() {
  pinMode(analogPin, INPUT);    
  Serial.begin(9600);           // Start serial communication at 9600 baud
}

void loop() {
  int analogVal = analogRead(analogPin);  // Read the analog value (0 to 1023)
  V2 = (5. * analogVal) / 1023.;          // Convert to voltage (0V to 5V)
  Serial.println(V2);                     // Print the voltage to the Serial Monitor
  delay(sleep);                           // Wait before taking the next reading
}
