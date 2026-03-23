#include <Arduino.h>
// set pin numbers
const int buttonPin = 4;  // the number of the pushbutton pin
const int ledPin =  5;    // the number of the LED pin



// variable for storing the pushbutton status
int buttonState = 0;
bool botao4 = 0;
bool botao12 = 0;
bool botao13 = 0;
bool botao14 = 0;

void setup() {
  Serial.begin(115200);  
  // initialize the pushbutton pin as an input
  pinMode(buttonPin, INPUT);
  // initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);

}

void loop() {
  botao4 =digitalRead(4);
  Serial.println(botao4);

  if (botao4 == HIGH)  {
    digitalWrite(ledPin, HIGH);
  } else {
     digitalWrite(ledPin, LOW);
  }
 
  delay(500);
}