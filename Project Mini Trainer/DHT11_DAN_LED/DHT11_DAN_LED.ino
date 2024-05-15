// MENYALAKAN 4 BUAH LED MENGGUNAKAN SENSOR DHT 11
#include <DHT.h>

#define DHTPIN 2 
#define DHTTYPE DHT11 

DHT dht(DHTPIN, DHTTYPE);

#define LED1 3
#define LED2 4 
#define LED3 5
#define LED4 6 

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  if (!isnan(humidity) && !isnan(temperature)) {
    float suhuAmbang = 36.0;

    if (temperature > suhuAmbang) {
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, HIGH); 
      digitalWrite(LED3, HIGH); 
      digitalWrite(LED4, HIGH);
    } else {
      digitalWrite(LED1, LOW); 
      digitalWrite(LED2, LOW); 
      digitalWrite(LED3, LOW);
      digitalWrite(LED4, LOW); 
    }
  }

  delay(1000); 
}
