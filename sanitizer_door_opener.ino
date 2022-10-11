#include <Servo.h>
long duration,cm,UltraSensor1,UltraSensor2;
int trig = 11;
int echo = 10;
bool wash = false;
int trig2 = 5;
int echo2 = 6;
const unsigned long eventInterval = 5000;
unsigned long previousTime = 0;
Servo motor;
Servo motor2;
void setup() {
  Serial.begin(9600);

pinMode(trig,OUTPUT);
pinMode(echo,INPUT);

pinMode(trig2,OUTPUT);
pinMode(echo2,INPUT);
 motor.attach(13);
 motor2.attach(9);
 motor.write(90);
 motor2.write(0);
 
}



void loop() {
//  /
unsigned long currentTime = millis();
int you; 
SonarSensor(trig, echo);              
UltraSensor1 = cm;                      
//Serial.print(UltraSensor1);
SonarSensor(trig2,echo2);               
UltraSensor2 = cm;
Serial.print(UltraSensor1);
Serial.print(" ");
Serial.println(UltraSensor2);



if (UltraSensor1 <16) {
  motor.write(10);
 delay(500);
 motor.write(100);
 delay(500);
 motor.write(99);
 wash =true;  
} 


if(UltraSensor2 <18 and wash == true){
 motor2.write(106);

 }
 if (currentTime - previousTime >= eventInterval and UltraSensor2 >15 ) {
    
    Serial.println("Ice Ice Baby");
    motor2.write(0);
    wash = false;
    previousTime = currentTime;
  }
///

 
 
 Serial.println(wash);
//wash=false;
 




}


void SonarSensor(int trigPinSensor,int echoPinSensor)//it takes the trigPIN and the echoPIN 
{
  //START SonarSensor FUNCTION
  //generate the ultrasonic wave
//---------------------------------------------------------------------------------------------------------------------- 
digitalWrite(trigPinSensor, LOW);// put trigpin LOW 
delayMicroseconds(2);// wait 2 microseconds
digitalWrite(trigPinSensor, HIGH);// switch trigpin HIGH
delayMicroseconds(10); // wait 10 microseconds
digitalWrite(trigPinSensor, LOW);// turn it LOW again
//----------------------------------------------------------------------------------------------------------------------

//read the distance
//----------------------------------------------------------------------------------------------------------------------
duration = pulseIn(echoPinSensor, HIGH);//pulseIn funtion will return the time on how much the configured pin remain the level HIGH or LOW; in this case it will return how much time echoPinSensor stay HIGH
cm= (duration/58.2); // first we have to divide the duration by two  
}// END 
