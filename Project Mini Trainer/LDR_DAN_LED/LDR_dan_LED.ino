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


#define ldr A0 
#define led1 13
#define led2 12
#define led3 11
#define led4 10
int ldrValue ;

void setup() {
  Serial.begin(115200);
  pinMode(ldr, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop(){
  ldrValue = analogRead(ldr);
  Serial.println(ldrValue);
  if (ldrValue > 1022){
    digitalWrite (led1,  1);
  }else{
    digitalWrite(led1, 0);  
  }
  delay(50);

  if (ldrValue > 1022){
    digitalWrite (led2,  1);
  }else{
    digitalWrite(led2, 0);  
  }
  delay(50);

  if (ldrValue > 1022){
    digitalWrite (led3,  1);
  }else{
    digitalWrite(led3, 0);  
  }
  delay(50);

  if (ldrValue > 1022){
    digitalWrite (led4,  1);
  }else{
    digitalWrite(led4, 0);  
  }
  delay(50);
}