#include Stepper.h
 Define number of steps per revolution
const int stepsPerRevolution = 200;
 Initialize the stepper library on pins 8 through 11

Stepper myStepperX = Stepper(stepsPerRevolution, 2,3);
Stepper myStepperY = Stepper(stepsPerRevolution, 4,5);
Stepper myStepperZ = Stepper(stepsPerRevolution, 6,7);

sensor pins

#define irsensor1 A0
#define irsensor2 A1
#define irsensor3 A2
#define irsensor4 A3
#define irsensor5 A4
#define irsensor6 A5
#define irsensor7 A6
#define irsensor8 A7
#define irsensor9 A8

x-y-z step lenght
int xStep = 400;
int yStep = 400;
int zStep = 400;

void setup() {
   Set the motor speed (RPMs)
  myStepperX.setSpeed(100);
  myStepperY.setSpeed(100);
  myStepperZ.setSpeed(100);
  sensor1 ();
  sensor2 ();
  sensor3 ();
  sensor4 ();
  sensor5 ();
  sensor6 ();
  sensor7 ();
  sensor8 ();
  sensor8 ();
  sensor9 ();
  
}
void loop()
{
int sensor1 = sensor1 ();
int sensor2 = sensor2 ();
int sensor3 = sensor3 ();
int sensor4 = sensor4 ();
int sensor5 = sensor5 ();
int sensor6 = sensor6 ();
int sensor7 = sensor7 ();
int sensor8 = sensor8 ();
int sensor9 = sensor9 ();
  if(0==sensor1)
  {
    goNumber1();
    }

    if(0==sensor2)
  {
    goNumber2();
    }

    if(0==sensor3)
  {
    goNumber3();
    }

    if(0==sensor4)
  {
    goNumber4();
    }
     if(0==sensor5)
  {
    goNumber5();
    }
     if(0==sensor6)
  {
    goNumber6();
    }
     if(0==sensor7)
  {
    goNumber7();
    } 
     if(0==sensor8)
  {
    goNumber8();
    }
     if(0==sensor9)
  {
    goNumber9();
    } 
   
}

Slot1
void goNumber1()
 {
   Step one revolution in one direction
  myStepperX.step(xStep0);
  delay(1000);
   Step on revolution in the other direction
   myStepperY.step(yStep0);
  delay(1000);
    Step one revolution in one direction
  myStepperZ.step(zStep);
  delay(1000);
   Step on revolution in the other direction
   myStepperZ.step(-zStep);
  delay(1000);
    Step one revolution in one direction
  myStepperY.step(-yStep0);
  delay(1000);
   Step on revolution in the other direction
   myStepperX.step(-xStep0);
  delay(1000);  
}

Slot2
void goNumber2()
 {
   Step one revolution in one direction
  myStepperX.step(xStep1);
  delay(1000);
   Step on revolution in the other direction
   myStepperY.step(yStep0);
  delay(1000);
    Step one revolution in one direction
  myStepperZ.step(zStep);
  delay(1000);
   Step on revolution in the other direction
   myStepperZ.step(-zStep);
  delay(1000);
    Step one revolution in one direction
  myStepperY.step(-yStep0);
  delay(1000);
   Step on revolution in the other direction
   myStepperX.step(-xStep1);
  delay(1000);  
}
Slot3
void goNumber3()
 {
   Step one revolution in one direction
  myStepperX.step(xStep2);
  delay(1000);
   Step on revolution in the other direction
   myStepperY.step(yStep0);
  delay(1000);
    Step one revolution in one direction
  myStepperZ.step(zStep);
  delay(1000);
   Step on revolution in the other direction
   myStepperZ.step(-zStep);
  delay(1000);
    Step one revolution in one direction
  myStepperY.step(-yStep0);
  delay(1000);
   Step on revolution in the other direction
   myStepperX.step(-xStep2);
  delay(1000);  
}
Slot4
void goNumber4()
 {
   Step one revolution in one direction
  myStepperX.step(xStep0);
  delay(1000);
   Step on revolution in the other direction
   myStepperY.step(yStep1);
  delay(1000);
    Step one revolution in one direction
  myStepperZ.step(zStep);
  delay(1000);
   Step on revolution in the other direction
   myStepperZ.step(-zStep);
  delay(1000);
    Step one revolution in one direction
  myStepperY.step(-yStep1);
  delay(1000);
   Step on revolution in the other direction
   myStepperX.step(-xStep0);
  delay(1000);  
}

Slot5
void goNumber5()
 {
   Step one revolution in one direction
  myStepperX.step(xStep1);
  delay(1000);
   Step on revolution in the other direction
   myStepperY.step(yStep1);
  delay(1000);
    Step one revolution in one direction
  myStepperZ.step(zStep);
  delay(1000);
   Step on revolution in the other direction
   myStepperZ.step(-zStep);
  delay(1000);
    Step one revolution in one direction
  myStepperY.step(-yStep1);
  delay(1000);
   Step on revolution in the other direction
   myStepperX.step(-xStep1);
  delay(1000);  
}
Slot6
void goNumber()
 {
   Step one revolution in one direction
  myStepperX.step(xStep2);
  delay(1000);
   Step on revolution in the other direction
   myStepperY.step(yStep1);
  delay(1000);
    Step one revolution in one direction
  myStepperZ.step(zStep);
  delay(1000);
   Step on revolution in the other direction
   myStepperZ.step(-zStep);
  delay(1000);
    Step one revolution in one direction
  myStepperY.step(-yStep1);
  delay(1000);
   Step on revolution in the other direction
   myStepperX.step(-xStep2);
  delay(1000);  
}
Slot7
void goNumber7()
 {
   Step one revolution in one direction
  myStepperX.step(xStep0);
  delay(1000);
   Step on revolution in the other direction
   myStepperY.step(yStep2);
  delay(1000);
    Step one revolution in one direction
  myStepperZ.step(zStep);
  delay(1000);
   Step on revolution in the other direction
   myStepperZ.step(-zStep);
  delay(1000);
    Step one revolution in one direction
  myStepperY.step(-yStep2);
  delay(1000);
   Step on revolution in the other direction
   myStepperX.step(-xStep0);
  delay(1000);  
}

Slot8
void goNumber8()
 {
   Step one revolution in one direction
  myStepperX.step(xStep1);
  delay(1000);
   Step on revolution in the other direction
   myStepperY.step(yStep2);
  delay(1000);
    Step one revolution in one direction
  myStepperZ.step(zStep);
  delay(1000);
   Step on revolution in the other direction
   myStepperZ.step(-zStep);
  delay(1000);
    Step one revolution in one direction
  myStepperY.step(-yStep2);
  delay(1000);
   Step on revolution in the other direction
   myStepperX.step(-xStep1);
  delay(1000);  
}
Slot9
void goNumber9()
 {
   Step one revolution in one direction
  myStepperX.step(xStep2);
  delay(1000);
   Step on revolution in the other direction
   myStepperY.step(yStep2);
  delay(1000);
    Step one revolution in one direction
  myStepperZ.step(zStep);
  delay(1000);
   Step on revolution in the other direction
   myStepperZ.step(-zStep);
  delay(1000);
    Step one revolution in one direction
  myStepperY.step(-yStep2);
  delay(1000);
   Step on revolution in the other direction
   myStepperX.step(-xStep2);
  delay(1000);  
}


int sensor1 () {
  int irvalue = analogRead(irsensor1);
  Serial.print(sensorvalue );
  Serial.println(irvalue);
  delay(500);
  if (irvalue500){
    return 1;
  }
  else {
     
     return 0;
  }
  
}
int sensor2 () {
  int irvalue = analogRead(irsensor2);
  Serial.print(sensorvalue );
  Serial.println(irvalue);
  delay(500);
  if (irvalue500){
    return 1;
  }
  else {
     return 0;
  }
  
}
int sensor3 () {
  int irvalue = analogRead(irsensor3);
  Serial.print(sensorvalue );
  Serial.println(irvalue);
  delay(500);
  if (irvalue500){
    return 1;
  }
  else {
     return 0;
  }
  
}
int sensor4 () {
  int irvalue = analogRead(irsensor4);
  Serial.print(sensorvalue );
  Serial.println(irvalue);
  delay(500);
  if (irvalue500){
    return 1;
  }
  else {
    return 0;
  }
  
}
int sensor5 () {
  int irvalue = analogRead(irsensor5);
  Serial.print(sensorvalue );
  Serial.println(irvalue);
  delay(500);
  if (irvalue500){
    return 1;
  }
  else {
     return 0;
  }
int sensor6 () {
  int irvalue = analogRead(irsensor6);
  Serial.print(sensorvalue );
  Serial.println(irvalue);
  delay(500);
  if (irvalue500){
    return 1;
  }
  else {
     return 0;
  }
 int sensor7 () {
  int irvalue = analogRead(irsensor7);
  Serial.print(sensorvalue );
  Serial.println(irvalue);
  delay(500);
  if (irvalue500){
    return 1;
  }
  else {
     return 0;
  }
int sensor8 () {
  int irvalue = analogRead(irsensor8);
  Serial.print(sensorvalue );
  Serial.println(irvalue);
  delay(500);
  if (irvalue500){
    return 1;
  }
  else {
     return 0;
  }   
int sensor9 () {
  int irvalue = analogRead(irsensor9);
  Serial.print(sensorvalue );
  Serial.println(irvalue);
  delay(500);
  if (irvalue500){
    return 1;
  }
  else {
     return 0;
  }
