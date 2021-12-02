const int stepPin = 3;
const int dirPin = 4;
const int button1Pin = 5;
boolean button1State = false;
const int button2Pin = 6;
boolean button2State = false;


void setup() {
  Serial.begin(9600);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
}

void loop() {
  boolean button1State = digitalRead(button1Pin);  
boolean button2State = digitalRead(button2Pin);
  
if (button1State == true){
   digitalWrite(dirPin,HIGH);
   for(int x=0; x<3000; x++){
 
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(500);
  }
//for(int x=0; x<200; x++){
// 
//    digitalWrite(stepPin,HIGH);
//    delayMicroseconds(500);
//    digitalWrite(stepPin,LOW);
//    delayMicroseconds(500);
//  }
}

Serial.println(button1State);

if (button2State == true){
  digitalWrite(dirPin,LOW);

for(int x=0; x<3000; x++){
  digitalWrite(stepPin,HIGH);
  delayMicroseconds(500);
  digitalWrite(stepPin,LOW);
  delayMicroseconds(500);
}
}

}
