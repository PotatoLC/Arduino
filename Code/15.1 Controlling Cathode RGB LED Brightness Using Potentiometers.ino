/*
This program controls the brightness of an RGB LED using three potentiometers, each corresponding to the red, green, and blue channels. 
The values from the potentiometers are read as analog inputs, mapped to a 0-255 range for PWM output, and then used to control the brightness 
of each color channel on the RGB LED.

Required Materials:
  - Arduino Uno board
  - USB cable
  - RGB LED (common cathode)
  - 3 potentiometers
  - 3 resistors (220 ohms each)
  - Breadboard and connecting wires
*/

const int redPin = A0;
const int greenPin = A1;
const int bluePin = A2;
const int red = 9;
const int green = 10;
const int blue = 11;
float redValue = 0.0, greenValue = 0.0, blueValue = 0.0;
const int SLEEP = 1000;

void setup() {
  Serial.begin(9600);
  pinMode(redPin, INPUT);
  pinMode(greenPin, INPUT);
  pinMode(bluePin, INPUT);

  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop() {
  redValue = map(analogRead(redPin), 0, 1023, 255, 0);
  greenValue = map(analogRead(greenPin), 0, 1023, 255, 0);
  blueValue = map(analogRead(bluePin), 0, 1023, 255, 0);


  Serial.println("[!] Values:    Red: " + String(redValue) + " |   Green: " + String(greenValue) + " |   Blue: " + String(blueValue));
  analogWrite(red, redValue);
  analogWrite(green, greenValue);
  analogWrite(blue, blueValue);
  delay(SLEEP);
}
