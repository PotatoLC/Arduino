const int GREEN_LED = 8;
const int SPACE = 900;
const int RESET = 3200;
const int DOT = 350;
const int DASH = 700;

void setup() {
  // put your setup code here, to run once:
  pinMode(GREEN_LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // Mensaje Deseado: SOS --> ... --- ...

  dot(3);  // ...
  delay(SPACE);
  dash(3);  // ---
  delay(SPACE);
  dot(3);  // ...
  delay(RESET);
}

void dot(int times) {
  for (int i = 0; i < times; i++) {
    digitalWrite(GREEN_LED, HIGH);
    delay(DOT);
    digitalWrite(GREEN_LED, LOW);
    delay(DOT);
  }
}

void dash(int times) {
  for (int i = 0; i < times; i++) {
    digitalWrite(GREEN_LED, HIGH);
    delay(DASH);
    digitalWrite(GREEN_LED, LOW);
    delay(DASH);
  }
}
