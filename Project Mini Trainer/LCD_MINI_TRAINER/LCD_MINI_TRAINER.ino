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

// MENAMPILKAN TULISAN "MINI TRAINER KELOMPOK 1" PADA LCD 
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2); 
  lcd.print("MINI TRAINER"); 
  lcd.setCursor(0, 1);
  lcd.print("KELOMPOK 1");
}

void loop() {
}
