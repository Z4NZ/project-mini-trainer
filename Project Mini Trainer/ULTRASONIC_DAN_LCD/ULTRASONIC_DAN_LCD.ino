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
#include <LiquidCrystal.h>

// Konstanta untuk mengkonfigurasi LCD
const int LCD_RS = 7;
const int LCD_EN = 6;
const int LCD_D4 = 5;
const int LCD_D5 = 4;
const int LCD_D6 = 3;
const int LCD_D7 = 2;

// Konstanta untuk sensor jarak
const int TRIGGER_PIN = 9;
const int ECHO_PIN = 8;

// Maksimum pembacaan sensor (200cm)
const int MEASURE_LIMIT = 200;

// Inisialisasi LCD
LiquidCrystal lcd(LCD_RS, LCD_EN, LCD_D4, LCD_D5, LCD_D6, LCD_D7);

void setup() {
  // Konfigurasi pin trigger sebagai output
  pinMode(TRIGGER_PIN, OUTPUT);

  // Konfigurasi pin echo sebagai input
  pinMode(ECHO_PIN, INPUT);

  // Inisialisasi LCD
  lcd.begin(16, 2);

  // Tampilkan informasi blog di LCD
  lcd.setCursor(6, 0);
  lcd.println("Blog:");
  lcd.setCursor(0, 1);
  lcd.print("Mahirelektro.com");

  // Tunggu selama 2 detik
  delay(2000);

  // Bersihkan tampilan LCD
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Jarak = ");
}

void loop() {
  // Baca jarak dengan menggunakan sensor ultrasonic
  float distance = readSensor();

  // Tampilkan jarak di LCD
  lcd.setCursor(8, 0);
  lcd.print(distance, 1);
  lcd.println(" cm       ");
}

// Fungsi untuk membaca jarak menggunakan sensor ultrasonic
float readSensor() {
  // Kirim sinyal trigger ke sensor
  digitalWrite(TRIGGER_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIGGER_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIGGER_PIN, LOW);

  // Baca sinyal echo yang dikembalikan oleh sensor
  float duration = pulseIn(ECHO_PIN, HIGH);

  // Hitung jarak dengan menggunakan rumus fisika
  float distance = (duration / 2) / 29.1;

  // Batasi jarak yang terukur agar tidak melebihi batas maksimum
  distance = constrain(distance, 0, MEASURE_LIMIT);

  // Kembalikan nilai jarak yang terukur
  return distance;
}