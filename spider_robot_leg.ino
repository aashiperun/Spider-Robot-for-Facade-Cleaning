// Code to interface an Arduino Mega 2560 with a NEMA 17 dual shaft motor using a A4988 Logical Drive]
// This code is only a part of the entire code required to control the spider's leg

const int stepPin=3;
const int dirPin=4;

void setup()
{
    pinMode(stepPin,OUTPUT);
    pinMode(dirPin,OUTPUT);
}
void loop()
{
    digitalWrite(dirPin,HIGH);
    for(int i=0; i<200; i++)
    { 
      digitalWrite(stepPin, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPin,LOW);
      delayMicroseconds(500);
    }
    delay(1000);
    digitalWrite(stepPin, LOW);
    for(int i=0; i<400; i++)
    {
      digitalWrite(stepPin, HIGH);
      delayMicroseconds(500);
      digitalWrite(stepPin,LOW);
      delayMicroseconds(500);
    }
  delay(1000);
}
