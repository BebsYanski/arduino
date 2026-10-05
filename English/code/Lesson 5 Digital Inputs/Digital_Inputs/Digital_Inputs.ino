//www.elegoo.com
//2016.12.08

int ledPin = 5;
int buttonApin = 9;
int buttonBpin = 8;

byte leds = 0;

void setup() 
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonApin, INPUT_PULLUP);  
  pinMode(buttonBpin, INPUT_PULLUP);  
}

void loop() 
{
  if (digitalRead(buttonApin) == LOW)
  {
    digitalWrite(ledPin, LOW);
  }
  if (digitalRead(buttonBpin) == LOW)
  {
    for(int i = 0; i<= 20;i++){
      digitalWrite(ledPin, HIGH);
    delay(500);
          digitalWrite(ledPin, LOW);
              delay(500);


      }
    digitalWrite(ledPin, HIGH);
//    delay(1000);
    
  }
}
