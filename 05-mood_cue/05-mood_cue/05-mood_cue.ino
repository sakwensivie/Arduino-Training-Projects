#include<Servo.h>

Servo myservo;

const int potPin = A0;

int potValue;
int angle;



void setup() {
  // put your setup code here, to run once:
  myservo.attach(9);

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  potValue = analogRead(potPin);
  Serial.print("PotValue: ");
  Serial.print(potValue);

  angle = map(potValue, 0, 1023, 0, 180);
  Serial.print(", Angle: ");
  Serial.println(angle);

  myservo.write(angle);

  delay(1);

}
