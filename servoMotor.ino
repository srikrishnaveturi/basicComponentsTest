#include<Servo.h>
Servo nameServo;
 int position = 0;
void setup() {
  // put your setup code here, to run once:
nameServo.attach(9);
}

void loop() {
  nameServo.write(0);
  delay(500);
  nameServo.write(180);
  delay(500);
  
}
