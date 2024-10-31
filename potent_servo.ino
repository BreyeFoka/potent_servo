#include<Servo.h>

Servo servo;
int potpin=0;
int val;

void setup() {
  // put your setup code here, to run once:
  servo.attach(9);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(potpin);
  val =  map(val, 0, 1023, 0, 360);
  Serial.println(val);
  servo.write(val);
  delay(15);
}
