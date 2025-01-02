/*
This project allows the user to interact with an Arduino board through the Serial Monitor by selecting which LED to turn on. The user 
is presented with a menu of options, each corresponding to a specific LED. The program validates the user's input and either activates 
the selected LED or signals an error if the input is invalid.

Required Materials:
  - Arduino Uno board
  - USB cable
  - 5 LEDs (Red, Green, Blue, Yellow, Purple)
  - 5 resistors (220 ohms each)
  - Breadboard and connecting wires
*/

String options = "Escribe el color que deseas encender \n" 
                 "\t [1] Red \n" 
                 "\t [2] Green \n" 
                 "\t [3] Blue \n" 
                 "\t [4] Yellow \n" 
                 "\t [5] Purple \n";

int number = 0;
const int SLEEP = 5000;
const int WAIT = 600;
const int RED_LED = 11;
const int GREEN_LED = 10;
const int BLUE_LED = 9;
const int YELLOW_LED = 8;
const int PURPLE_LED = 7;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for (int led = PURPLE_LED; led <= RED_LED; led++){
    pinMode(led, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  
  Serial.println(options);
  while (Serial.available() == 0) {

  }

  do {
    number = Serial.parseInt(); 
    switch (number) {
      case 1:
        Serial.println("[-] Turning on Red LED\n");
        light_led(RED_LED);
        break;
      case 2:
        Serial.println("[-] Turning on Green LED\n");
        light_led(GREEN_LED);
        break;
      case 3: 
        Serial.println("[-] Turning on Blue LED\n");
        light_led(BLUE_LED);
        break;
      case 4:
        Serial.println("[-] Turning on Yellow LED\n");
        light_led(YELLOW_LED);
        break;
      case 5:
        Serial.println("[-] Turning on Purple LED\n");
        light_led(PURPLE_LED);
        break;
      default:
        Serial.println("[!] Invalid selection (" + String(number) + "). Try again.\n");
        error();
        return;
    }
  } while (number > 5 || number <= 0);
}

void light_led(int LED) {
  digitalWrite(LED, HIGH);
  delay(SLEEP);
  digitalWrite(LED, LOW);
  delay(WAIT);
}

void error() {
  for (int i = 0; i < 6; i++) {
    for (int j = RED_LED; j >= PURPLE_LED; j--) {
      digitalWrite(j, HIGH);
      delay(100);
      digitalWrite(j, LOW);
    }
  }
}


