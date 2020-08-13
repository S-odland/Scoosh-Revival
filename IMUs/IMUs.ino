#include <stdio.h>

const int xPin = A3; // x-axis of the accelerometer
const int yPin = A2; // y-axis
const int zPin = A1; // z-axis

const int led1 = 21; // red LED to check if accelerometer measures movement
 
void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);
  Serial.begin(9600);
}

bool recMovement(float x,float y)
{
  if ((x < 220 || x > 240) || (y < 210 || y > 230)){
    return true;
  }else{
    return false;
  }
}

float sampleX(){
  
  int x;
  float xTrans = 0;
  for (int i = 0; i <10; i++){
    
    x = analogRead(xPin);
    xTrans += ((float)x - 331.5)/65*9.8;
  }
  return xTrans/10;
}

float sampleY(){

  int y;
  float yTrans = 0;
  for (int i = 0; i <10; i++){
    
    y = analogRead(yPin);
    yTrans += ((float)y - 329.5)/68.5*9.8;
  }
  return yTrans/10;
}

float sampleZ(){
  
  int z;
  float zTrans = 0;
  for (int i = 0; i <10; i++){
    
    z = analogRead(zPin);
    zTrans += ((float)z - 340)/68*9.8;
  }
  return zTrans/10;
}
 
void loop()
{
 
  float xVal, yVal, zVal;

  xVal = sampleX();
  yVal = sampleY();
  zVal = sampleZ();

  if (recMovement(xVal,yVal) == 1){
    digitalWrite(led1, HIGH);
    Serial.print("OPEN DOOR!!\n");
    delay(500);
  } else {
    digitalWrite(led1, LOW);
    delay(500);
  }
  
}
