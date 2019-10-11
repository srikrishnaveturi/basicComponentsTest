#include<IRremote.h>
int recvPin = 12;
int c = 0;
IRrecv irrecv(recvPin);
decode_results results;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
irrecv.enableIRIn();

}

void loop() {
  // put your main code here, to run repeatedly:
if(irrecv.decode(&results))
{
  Serial.println(results.value,HEX);
  irrecv.resume();
}
}
