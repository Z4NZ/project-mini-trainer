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
#include <Servo.h>

Servo myServo;  // Objek Servo

void setup() {
  Serial.begin(9600);  // Inisialisasi komunikasi serial
  myServo.attach(9);   // Menghubungkan servo ke pin 9
}

void loop() {
  if (Serial.available() > 0) {
    char command = Serial.read();  // Membaca karakter dari Bluetooth

    if (command == 'o') {
      myServo.write(0);  // Posisi 0 derajat
    } else if (command == 'c') {
      myServo.write(90);  // Posisi 90 derajat
    }
  }
}