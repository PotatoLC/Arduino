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
