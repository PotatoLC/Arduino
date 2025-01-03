/*
This Arduino program allows the user to control a common cathode RGB LED via Serial input. The user can choose from several color 
options, including Red, Green, Blue, Cyan, Magenta, Yellow, White, or Off. The RGB LED is controlled by setting the corresponding pins 
HIGH or LOW based on the color selected. If an invalid input is entered, an error message is shown, and the user can try again. 
The program also includes an energy pin to indicate the status of the circuit. The user interacts with the program via the Serial Monitor.

Required Materials:
  - Arduino Uno board
  - Common Anode RGB LED
  - 3 resistors (220 ohms each)
  - Breadboard and connecting wires
  - USB cable
*/

const int redPin = 8;
const int greenPin = 9;
const int bluePin = 10;
const int SLEEP = 5000; // LED on duration (ms)
String error = "\n[-] Error, try again!";
String TEXT = "\n[!] Enter the color to light up: "
              "\n\t [0] Off"     // 0, 0, 0
              "\n\t [1] Red"     // 1, 0, 0 
              "\n\t [2] Green"   // 0, 1, 0
              "\n\t [3] Blue"    // 0, 0, 1
              "\n\t [4] Cyan"    // 0, 1, 1
              "\n\t [5] Magenta" // 1, 0, 1
              "\n\t [6] Yellow"  // 1, 1, 0
              "\n\t [7] White";  // 1, 1, 1
int answer = 0;

void setup() {
  Serial.begin(9600);  // Initialize Serial communication
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
   Serial.println(TEXT);
  
  while (Serial.available() == 0) {}

  answer = Serial.parseInt();
  
  if (answer >= 0 && answer <= 7) {
    switch (answer) {
      case 0:
        Serial.println("\n[+] Turning Off");
        lightLed(0, 0, 0);
        break;
      case 1:
        Serial.println("\n[+] Turning on Red");
        lightLed(1, 0, 0);
        break;
      case 2:
        Serial.println("\n[+] Turning on Green");
        lightLed(0, 1, 0);
        break;
      case 3:
        Serial.println("\n[+] Turning on Blue");
        lightLed(0, 0, 1);
        break;
      case 4:
        Serial.println("\n[+] Turning on Cyan");
        lightLed(0, 1, 1);
        break;
      case 5:
        Serial.println("\n[+] Turning on Magenta");
        lightLed(1, 0, 1);
        break;
      case 6:
        Serial.println("\n[+] Turning on Yellow");
        lightLed(1, 1, 0);
        break; 
      case 7:
        Serial.println("\n[+] Turning on White");
        lightLed(1, 1, 1);
        break;
      default:
        Serial.println(error);
        break;
    } 
  } else {
    Serial.println(error);
  }
}

// Function to control the RGB LED based on user input
void lightLed(int redStatus, int greenStatus, int blueStatus) {
  digitalWrite(redPin, redStatus);
  digitalWrite(greenPin, greenStatus);
  digitalWrite(bluePin, blueStatus);
  delay(SLEEP);  
}
