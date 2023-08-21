String InBytes;
#include <SoftwareSerial.h>

int LED = 2;
int ena=5;
int in1=6;
int in2=7;
int enb=10;
int in3=8;
int in4=9;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(ena,OUTPUT);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(enb,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  Serial.begin(9600);
    

}
void loop() 
{
  if (Serial.available()>0)
  {
    String InBytes=Serial.readStringUntil('\n');
    if(InBytes == "f")
    {
      digitalWrite(LED, HIGH);
      digitalWrite(in1,LOW);
      digitalWrite(in2,HIGH);
      digitalWrite(ena,200); 
      //moto2
      digitalWrite(in3,HIGH);
      digitalWrite(in4,LOW);
      digitalWrite(enb,200);
      delay(1000);
      //motor 1
      digitalWrite(in1,LOW);
      digitalWrite(in2,LOW);
      //moto2
      digitalWrite(in3,LOW);
      digitalWrite(in4,LOW);
      
      
    }
    if(InBytes == "b")
    {
      digitalWrite(LED, HIGH);
      //motor 1
      digitalWrite(in1,HIGH);
      digitalWrite(in2,LOW);
      digitalWrite(ena,200);
      //moto2
      digitalWrite(in3,LOW);
      digitalWrite(in4,HIGH);
      digitalWrite(enb,200);
      delay(1000);
      //motor 1
      digitalWrite(in1,LOW);
      digitalWrite(in2,LOW);
      //moto2
      digitalWrite(in3,LOW);
      digitalWrite(in4,LOW);
      

    }
    if(InBytes == "r")
    {
     digitalWrite(in3,HIGH);
      digitalWrite(in4,LOW);
      digitalWrite(enb,200);
      digitalWrite(in1,HIGH);
      digitalWrite(in2,LOW);
      digitalWrite(ena,200);
      delay(500);
      //motor 1
      digitalWrite(in1,LOW);
      digitalWrite(in2,LOW);
      //moto2
      digitalWrite(in3,LOW);
      digitalWrite(in4,LOW);
      
      
    }
    if(InBytes == "l")
    {
      digitalWrite(LED, HIGH);
      digitalWrite(in1,LOW);
      digitalWrite(in2,HIGH);
      digitalWrite(ena,200); 
      digitalWrite(in3,LOW);
      digitalWrite(in4,HIGH);
      digitalWrite(enb,200);
      delay(500);
      //motor 1
      digitalWrite(in1,LOW);
      digitalWrite(in2,LOW);
      //moto2
      digitalWrite(in3,LOW);
      digitalWrite(in4,LOW);
      
      
    }
    if(InBytes == "s")
    {
      digitalWrite(LED, LOW);
      //motor 1
      digitalWrite(in1,LOW);
      digitalWrite(in2,LOW);
      //moto2
      digitalWrite(in3,LOW);
      digitalWrite(in4,LOW);
    }
    
  }
}
