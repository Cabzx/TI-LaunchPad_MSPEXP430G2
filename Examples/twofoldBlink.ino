/*
  twofoldBlink
  Basic Energia example.
  Turns on an LED on for one second, then off for one second, and turns the other led in between.
  Pin 2 has an LED connected on MSP430 boards, has a name 'RED_LED' in the code.
  Pin 14 has an LED connected on MSP430 boards, has a namoe 'GREEN_LED' in the code.
  
  Hardware Required:
  * MSP-EXP430G2 LaunchPad
  
  This example code is in the public domain.
  Modified from original by CAB - 28 sept. 2013
*/
  

void setup() {                

  pinMode(RED_LED, OUTPUT);         //Set pins to output, if not used they default to input.
  pinMode(GREEN_LED, OUTPUT);  
}

void loop() {
  digitalWrite(RED_LED, HIGH); digitalWrite(GREEN_LED, LOW);  //HIGH turns on the LED, LOW turns it off.
  delay(150);               
  digitalWrite(RED_LED, LOW); digitalWrite(GREEN_LED, HIGH);   
  delay(150);               
}
