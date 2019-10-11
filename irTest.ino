#include <IRremote.h>
IRsend irsend;
void setup() 
{
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
irsend.sendNEC(0xDDDDDDD2,32);
Serial.println("bhej dia");
digitalWrite(13,HIGH);
delay(100);
digitalWrite(13,LOW);
delay(100);
}
