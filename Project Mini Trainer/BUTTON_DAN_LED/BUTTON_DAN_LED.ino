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

// MENGHIDUPKAN 4 LED MENGGUNAKAN 4 BUAH PUSH BUTTON
const int buttonPin1 = 2;  
const int buttonPin2 = 3;
const int buttonPin3 = 4;    
const int buttonPin4 = 5;
const int ledPin1 =  13;      
const int ledPin2 =  12;
const int ledPin3 =  11;      
const int ledPin4 =  10;

int buttonState1 = 0;         
int buttonState2 = 0;
int buttonState3 = 0;
int buttonState4 = 0;

void setup() {
  pinMode(ledPin1, OUTPUT);
   pinMode(ledPin2, OUTPUT);
    pinMode(ledPin3, OUTPUT);
     pinMode(ledPin4, OUTPUT);
  pinMode(buttonPin1, INPUT);
    pinMode(buttonPin2, INPUT);
      pinMode(buttonPin3, INPUT);
        pinMode(buttonPin4, INPUT);
}

void loop() {
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);
  buttonState4 = digitalRead(buttonPin4);

  if (buttonState1 == HIGH) {
    digitalWrite(ledPin1, HIGH);
  } else {
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, LOW);
  }
  if (buttonState2 == HIGH) {
    digitalWrite(ledPin2, HIGH);
  } else {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, LOW);
  }
  if (buttonState3 == HIGH) {
    digitalWrite(ledPin3, HIGH);
  } else {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin4, LOW);
  }
  if (buttonState4 == HIGH) {
    digitalWrite(ledPin4, HIGH);
  } else {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
  }
}
