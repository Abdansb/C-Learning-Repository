#include <Stepper.h>

const int IRsensor = 2;
const int stepsPerRevolution = 200;  // change this to fit the number of steps per revolution
// initialize the stepper library on pins 8 through 11:
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

void setup() {
  Serial.begin(9600);
  Serial.println("Serial openened");
  pinMode(IRsensor, INPUT);
 
  // set the speed at 60 rpm:
  myStepper.setSpeed(60);
  // initialize the serial port:
  Serial.begin(9600);
}

void loop() 
{
  int statusSensor = digitalRead(IRsensor);

  if (statusSensor == 1){
      Serial.println("Ada Benda");
} else {
      Serial.println("Kosong");
}


  /*
  // step one revolution  in one direction:
  //Serial.println("clockwise");
  myStepper.step(stepsPerRevolution);
  delay(500);

  // step one revolution in the other direction:
  //Serial.println("counterclockwise");
  myStepper.step(-stepsPerRevolution);
  delay(500);*/
}
