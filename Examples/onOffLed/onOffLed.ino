const int buttonPin = PUSH2;    
const int ledPin =  GREEN_LED;     
int buttonState = 0;         
byte en = HIGH;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);      
  pinMode(buttonPin, INPUT_PULLUP);     
}

void loop(){
   if (!digitalRead(buttonPin))   //Ocurre para un solo estado del botón.
  {
    Serial.println(en = !en);
  }         
    digitalWrite(ledPin, en);  
  } 
