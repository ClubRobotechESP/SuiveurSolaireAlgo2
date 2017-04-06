
#include <Servo.h>

int pos =0; //
int positionInit = 0; // position initiale
int positionFinal = 180;

Servo servo1;
Servo servo2;

//****** capteurs photoresistances
const int sensor1=A0; 
const int sensor2=A1;

//****** position optimale
int optimalPointSensor1Value = 0;
int optimalPointSensor2Value = 0;

void setup() {
   servo1.attach(10); 
   servo2.attach(7); 
   Serial.begin(9600);
 
}

void loop() {
  int val1 = analogRead(sensor1);
  int val2 = analogRead(sensor2);
  Serial.print(val1);
  Serial.print(" ");
  Serial.println(val2);
  if(val1 - val2<0){
   // tournerServo1(10, 0);
    
  }else{
    tournerServo2(10, 0);
  }

  
}


void tournerServo1(int angle, int initPos){
  for(pos = initPos; pos <= angle+initPos; pos += 10)    // goes from 180 degrees to 0 degrees
  {                               
        servo1.write(pos);              // tell servo to go to position in variable 'pos'
        delay(15);                       // waits 15ms for the servo to reach the position
  }
}

void tournerServo2(int angle, int initPos){
  for(pos = initPos; pos <= angle+initPos; pos += 1)    // goes from 180 degrees to 0 degrees
      {                               
        servo2.write(pos);              // tell servo to go to position in variable 'pos'
        delay(15);                       // waits 15ms for the servo to reach the position
      }
}


void tournerde


