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
#define led1 10//Membuat variabel LED ke-pin 10
#define led2 9
#define led3 8
#define led4 7
#define echoPin 11 //Membuat variabel Echo ke-pin 11
#define trigPin 12 //Membuat variabel Trig ke-pin 12
long duration, distance; //Membuat variabel untuk durasi dan jarak
 
void setup() {
  Serial.begin (9600); //Berfungsi untuk komunikasi serial dengan komputer
  pinMode(trigPin, OUTPUT); //Set varibel trigPin sebagai output
  pinMode(echoPin, INPUT); //Set variabel echoPin sebagai input
  pinMode(led1, OUTPUT); //Set variabel led sebagai output
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}
 
void loop() {
  //Program agar Trig mengirim sinyal ultrasonik
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
 
  duration = pulseIn(echoPin, HIGH); //Echo menerima sinyal ultrasonik
  distance = (duration/2)/29.1; //Rumus mengubah durasi menjadi jarak (cm)
 
  //Program jika jarak kurang dari 10 CM maka LED akan menyala
  if(distance<=5){
    digitalWrite(led1, HIGH);
  }else{
    digitalWrite(led1, LOW);
  }
 
 if(distance<=10){
    digitalWrite(led2, HIGH);
  }else{
    digitalWrite(led2, LOW);
  }
  
  if(distance<=20){
    digitalWrite(led3, HIGH);
  }else{
    digitalWrite(led3, LOW);
  }
  
  if(distance<=30){
    digitalWrite(led4, HIGH);
  }else{
    digitalWrite(led4, LOW);
  }
  //Meanmpilkan jarak di serial monitor dengan jeda 0.05 detik
  Serial.print(distance);
  Serial.println(" cm");
  delay(5);
}