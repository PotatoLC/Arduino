/*
This Arduino program uses 5 LEDs connected to digital pins 13, 12, 11, 10, and 9 to represent a 4-bit binary counter (from 0 to 15).  
The LEDs labeled `LED_1`, `LED_2`, `LED_4`, and `LED_8` represent the binary digits (1, 2, 4, and 8 respectively).  
The LED labeled `LED_RESET` blinks after each full cycle to indicate a reset.  

The program uses delays (`sleep` and `blink`) to control the timing of the binary counting and reset indicator.

Required Materials:
  - Arduino Uno board
  - USB power cable
  - 5 LEDs
  - 5 resistors (330 ohms recommended)
  - Breadboard and connecting wires
*/

const int LED_1 = 13;
const int LED_2 = 12;
const int LED_4 = 11;
const int LED_8 = 10;
const int LED_RESET = 9;
const int sleep = 1500;
const int reset = 5000;
const int blink = 250;

void setup() {
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_4, OUTPUT);
  pinMode(LED_8, OUTPUT);
  pinMode(LED_RESET, OUTPUT);

}

void loop() {

  // 0
  digitalWrite(LED_8, LOW);   // 0
  digitalWrite(LED_4, LOW);   // 0 
  digitalWrite(LED_2, LOW);   // 0 
  digitalWrite(LED_1, LOW);   // 0
  delay(sleep);

  // 1
  digitalWrite(LED_8, LOW);   // 0
  digitalWrite(LED_4, LOW);   // 0 
  digitalWrite(LED_2, LOW);   // 0 
  digitalWrite(LED_1, HIGH);  // 1
  delay(sleep);

  // 2
  digitalWrite(LED_8, LOW);   // 0 
  digitalWrite(LED_4, LOW);   // 0
  digitalWrite(LED_2, HIGH);  // 1
  digitalWrite(LED_1, LOW);   // 0 
  delay(sleep);

  // 3
  digitalWrite(LED_8, LOW);   // 0 
  digitalWrite(LED_4, LOW);   // 0
  digitalWrite(LED_2, HIGH);  // 1
  digitalWrite(LED_1, HIGH);  // 1 
  delay(sleep);

  // 4
  digitalWrite(LED_8, LOW);   // 0 
  digitalWrite(LED_4, HIGH);  // 1
  digitalWrite(LED_2, LOW);   // 0
  digitalWrite(LED_1, LOW);   // 0 
  delay(sleep);

  // 5
  digitalWrite(LED_8, LOW);   // 0 
  digitalWrite(LED_4, HIGH);  // 1
  digitalWrite(LED_2, LOW);   // 0
  digitalWrite(LED_1, HIGH);  // 1 
  delay(sleep);

  // 6
  digitalWrite(LED_8, LOW);   // 0 
  digitalWrite(LED_4, HIGH);  // 1
  digitalWrite(LED_2, HIGH);  // 1
  digitalWrite(LED_1, LOW);   // 0 
  delay(sleep);

  // 7
  digitalWrite(LED_8, LOW);   // 0 
  digitalWrite(LED_4, HIGH);  // 1
  digitalWrite(LED_2, HIGH);  // 1
  digitalWrite(LED_1, HIGH);  // 1
  delay(sleep);

  // 8
  digitalWrite(LED_8, HIGH);  // 1
  digitalWrite(LED_4, LOW);   // 0
  digitalWrite(LED_2, LOW);   // 0
  digitalWrite(LED_1, LOW);   // 0 
  delay(sleep);

  // 9
  digitalWrite(LED_8, HIGH);  // 1 
  digitalWrite(LED_4, LOW);   // 0
  digitalWrite(LED_2, LOW);   // 0
  digitalWrite(LED_1, HIGH);  // 1 
  delay(sleep);

  // 10
  digitalWrite(LED_8, HIGH);  // 1
  digitalWrite(LED_4, LOW);   // 0
  digitalWrite(LED_2, HIGH);  // 1
  digitalWrite(LED_1, LOW);   // 0 
  delay(sleep);

  // 11
  digitalWrite(LED_8, HIGH);  // 1 
  digitalWrite(LED_4, LOW);   // 0
  digitalWrite(LED_2, HIGH);  // 1
  digitalWrite(LED_1, HIGH);  // 1 
  delay(sleep);

  // 12
  digitalWrite(LED_8, HIGH);  // 1 
  digitalWrite(LED_4, HIGH);  // 1
  digitalWrite(LED_2, LOW);   // 0
  digitalWrite(LED_1, LOW);   // 0 
  delay(sleep);

  // 13
  digitalWrite(LED_8, HIGH);  // 1 
  digitalWrite(LED_4, HIGH);  // 1
  digitalWrite(LED_2, LOW);   // 0
  digitalWrite(LED_1, HIGH);  // 1 
  delay(sleep);

  // 14
  digitalWrite(LED_8, HIGH);  // 1
  digitalWrite(LED_4, HIGH);  // 1
  digitalWrite(LED_2, HIGH);  // 1
  digitalWrite(LED_1, LOW);   // 0 
  delay(sleep);

  // 15
  digitalWrite(LED_8, HIGH);  // 1 
  digitalWrite(LED_4, HIGH);  // 1
  digitalWrite(LED_2, HIGH);  // 1
  digitalWrite(LED_1, HIGH);  // 1 
  delay(sleep);

  digitalWrite(LED_8, LOW);   // 0
  digitalWrite(LED_4, LOW);   // 0 
  digitalWrite(LED_2, LOW);   // 0 
  digitalWrite(LED_1, LOW);   // 0
  
  for (int i = 0; i < 6; i++) {
    digitalWrite(LED_RESET, HIGH); 
    delay(blink);
    digitalWrite(LED_RESET, LOW);
    delay(blink);
  } 
  
}
