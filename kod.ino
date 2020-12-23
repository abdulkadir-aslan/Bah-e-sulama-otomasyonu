#include<SoftwareSerial.h>
SoftwareSerial myserial(6,7);
int sensor = A0;
int motor = 13;
int veri;

void setup() {
  pinMode(sensor,INPUT);
  pinMode(motor,OUTPUT);
  Serial.begin(9600);
myserial.begin(9600);
}

void loop() {
veri=analogRead(sensor);
 Serial.println(veri);
 if(myserial.available())
{ char data=myserial.read();
 Serial.println(data);
 if ( data == '1' && veri>600 )
  {
  digitalWrite(motor,HIGH);
  delay(4000);
  digitalWrite(motor,LOW);

  }else{
  digitalWrite(motor,LOW);
 }
   
   if ( data == '2' && veri>600 )
    {
  digitalWrite(motor,HIGH);
  delay(9000);
  digitalWrite(motor,LOW);
    } else{
  digitalWrite(motor,LOW);
   } 
   
if (data == '3' && veri>600)
    {
  digitalWrite(motor,HIGH);
  delay(7000);
  digitalWrite(motor,LOW);
 }else{
  digitalWrite(motor,LOW);
   } 
 if (data == '4' && veri>600 )
    {
  digitalWrite(motor,HIGH);
  delay(2000);
  digitalWrite(motor,LOW);
 }   else{
  digitalWrite(motor,LOW);
}
}
 }
