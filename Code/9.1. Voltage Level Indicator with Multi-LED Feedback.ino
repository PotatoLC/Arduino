/*
This Arduino program reads an analog voltage from pin A0, calculates its corresponding value, and provides visual 
feedback using three LEDs (green, yellow, and red) based on the voltage level. The green LED indicates low voltage (<3.0V), 
the yellow LED indicates medium voltage (3.0V to <4.0V), and the red LED indicates high voltage (>4.0V). The calculated voltage is 
also displayed in the Serial Monitor.

Required Materials:
  - Arduino Uno board
  - USB power cable
  - 3 LEDs (green, yellow, red)
  - 3 resistors of 220 ohms (one for each LED)
  - Potentiometer or analog sensor
  - Breadboard and connecting wires
*/

const int RED_LED = 6;
const int YELLOW_LED = 5;
const int GREEN_LED = 4;
const int ANALOG_PIN = A0;
const float VOLTAGE_ARDUINO = 5.0;
const int SLEEP = 250;
float read = 0.0;
float voltage_read = 0.0;

void setup() {
  pinMode(ANALOG_PIN, INPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(YELLOW_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  read = analogRead(ANALOG_PIN);
  voltage_read = (read * VOLTAGE_ARDUINO) / 1023.0;
  Serial.println(voltage_read);
  delay(SLEEP);

  if (voltage_read < 3.0){
    digitalWrite(GREEN_LED, HIGH);
    digitalWrite(YELLOW_LED, LOW);
    digitalWrite(RED_LED, LOW);
  }
  else if (voltage_read < 4.0 && voltage_read >= 3.0) {
    digitalWrite(GREEN_LED, LOW);
    digitalWrite(YELLOW_LED, HIGH);
    digitalWrite(RED_LED, LOW);
  }
  else if (voltage_read > 4.0){
    digitalWrite(GREEN_LED, LOW);
    digitalWrite(YELLOW_LED, LOW);
    digitalWrite(RED_LED, HIGH);
  }
}
