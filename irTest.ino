#include <IRremote.h>
IRsend irsend;
void setup() 
{
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(LED_BUILTIN,OUTPUT);
}
/* connect the postive terminal of the transmitter to the pwm pins that are connected to the clock of the microcontroller
for arduino uno, connect to digital pin 3, for arduino mega, it is pin 9..*/
void loop() {
  // put your main code here, to run repeatedly:
irsend.sendNEC(0x12345678,32);
Serial.println("CODE SENT");
digitalWrite(LED_BUILTIN,HIGH);
delay(100);
digitalWrite(LED_BUILTIN,LOW);
delay(100);
}
