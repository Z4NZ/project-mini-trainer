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
#include <SoftwareSerial.h>

SoftwareSerial bluetooth(10, 11); // RX, TX

int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;

void setup() {
  Serial.begin(9600);
  bluetooth.begin(9600);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop() {
  if (bluetooth.available() > 0) {
    char command = bluetooth.read();

    switch (command) {
      case '1':
        digitalWrite(led1, HIGH);
        break;
      case '2':
        digitalWrite(led2, HIGH);
        break;
      case '3':
        digitalWrite(led3, HIGH);
        break;
      case '4':
        digitalWrite(led4, HIGH);
        break;
      case '0':
        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);
        break;
    }
  }
}