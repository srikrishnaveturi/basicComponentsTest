#include<IRremote.h>
int recvPin = 12;
IRrecv irrecv(recvPin);
decode_results results;
void setup() {
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  // put your setup code here, to run once:
  Serial.begin(9600);
  irrecv.enableIRIn();
  digitalWrite(7,LOW);
  digitalWrite(6,HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
if(irrecv.decode(&results))
{
  Serial.println(results.value,HEX);
    irrecv.resume();

}
}
