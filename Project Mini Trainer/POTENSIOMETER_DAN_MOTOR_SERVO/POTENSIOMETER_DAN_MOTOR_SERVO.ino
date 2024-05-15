//Berikut nama anggotanya pak: 
//-M.Mizan
//-Jea.M
//-saidina Usman
//-M.fahri
//-Rena.M
//-fany Arif.P
//-Ridho.A.W
//-Nabila
//-Fauji.R
// MENGGERAKAN MOTOR SERVO MENGGUNAKAN POTENSIOMETER 
#include <Servo.h>

Servo myservo;

int potPin = A0;
int potValue = 0;

void setup() {
  myservo.attach(9);
}

void loop() {
  potValue = analogRead(potPin);

  int servoPos = map(potValue, 0, 1023, 0, 180);

  myservo.write(servoPos);
  delay(15);
}
