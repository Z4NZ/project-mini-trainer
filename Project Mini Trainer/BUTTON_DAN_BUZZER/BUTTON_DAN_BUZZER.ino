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

// MENGHIDUPKAN BUZZER DENGAN 4 BUAH PUSH BUTTON DENGAN FREKUENSI SUARA YANG BERBEDA 
const int buttonPin1 = 2;
const int buttonPin2 = 3;
const int buttonPin3 = 4;
const int buttonPin4 = 5;
const int buzzerPin = 9;

void setup() {
  pinMode(buttonPin1, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
  pinMode(buttonPin3, INPUT_PULLUP);
  pinMode(buttonPin4, INPUT_PULLUP);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  if (digitalRead(buttonPin1) == HIGH) {
    tone(buzzerPin, 1000);
    delay(1000);
    noTone(buzzerPin);
  }
  if (digitalRead(buttonPin2) == HIGH) {
    tone(buzzerPin, 1500);
    delay(3000);
    noTone(buzzerPin);
  }
  if (digitalRead(buttonPin3) == HIGH) {
    tone(buzzerPin, 2000);
    delay(500);
    noTone(buzzerPin);
  }
  if (digitalRead(buttonPin4) == HIGH) {
    tone(buzzerPin, 2500);
    delay(100);
    noTone(buzzerPin);
  }
}
