// MENYALAKAN BUZZER
//Berikut nama anggotanya pak: 
//-M.Mizan
//-Jea.M
//-saidina Usman
//-M.fahri
//-Rena.M
//-fany Arif.P
//-Ridho.A.W
//-Nabila.P
//-Fauji.R  
const int buzzerPin = 9;

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  tone(buzzerPin, 1000);
  delay(1000);
  noTone(buzzerPin);
  delay(1000);
}
