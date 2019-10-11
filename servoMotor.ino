#include<Servo.h>
Servo nameServo;
 int position = 0;
void setup() {
  // put your setup code here, to run once:
nameServo.attach(9);
}

void loop() {
  for (position = 0;position<= 180;position ++)
  {
    nameServo.write(position);
    delay(10);
  }
  // put your main code here, to run repeatedly:

for (position = 180;position>= 0;position --);
  {
    nameServo.write(position);
    delay(10);
  }
}
