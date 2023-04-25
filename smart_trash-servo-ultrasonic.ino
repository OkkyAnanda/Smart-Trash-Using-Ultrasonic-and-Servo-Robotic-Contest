#include <NewPing.h>
#include <Wire.h>
#include <Servo.h>
#define TRIGGER_PIN2 13
#define ECHO_PIN2 14
#define MAX_DISTANCE 200
NewPing sonar2 (TRIGGER_PIN2,ECHO_PIN2,MAX_DISTANCE);

#define TRIGGER_PIN1 12
#define ECHO_PIN1 11
#define MAX_DISTANCE 200
NewPing sonar1 (TRIGGER_PIN1,ECHO_PIN1,MAX_DISTANCE);

Servo servoRight;

void setup() {
  // put your setup code here, to run once:
  servoRight.attach(8);
  pinMode(13,OUTPUT);

  

}

void loop() {
  // put your main code here, to run repeatedly:
  int cm1=sonar1.ping_cm();
  int cm2=sonar2.ping_cm();
  if(cm1<5 && cm2>5 && cm1!=0 && cm2!=0){
  NAIK();
}else if (cm1>5){
    TURUN();
    
  }
     
 else if(cm2<3 && cm2>3 && cm2!=0 && cm1!=0){
  
  }


  }

  }


void NAIK() {
  servoRight.write(180);
  }
void TURUN()  {
  servoRight.write(0);
  }
 
