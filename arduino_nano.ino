#include <Servo.h>


Servo myservo;
int pos=0;


void setup(){
  Serial.begin(9600);
  myservo.attach(9);
  myservo.write(0);
}

void loop(){
  if(Serial.available()>0){
    int val=Serial.read();
    if(val=='0'){
      Serial.println("Hello");
      myservo.write(90);
    }
    else if(val=='1'){
      Serial.println("bye");
      myservo.write(0);
    }
  }
}