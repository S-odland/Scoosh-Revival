//int ledPin = 13;
//int x_in = A3;
//int y_in = A2;
//int z_in = A1;
//
//int x_out;
//int y_out;
//int z_out;
//
//void setup() {
//  // put your setup code here, to run once:
//  
//  pinMode(ledPin, OUTPUT);
//  pinMode(x_in, INPUT);
//  pinMode(y_in, INPUT);
//  pinMode(z_in, INPUT);
//  
//  Serial.begin(9600);
//
//  Serial.print("The x input is on A3, y input on A2 and z input on A1");
//  
//}
//
//void loop() {
//  // put your main code here, to run repeatedly:
//  
//  digitalWrite(ledPin, LOW);
//  
//  x_out = analogRead(x_in);
//  y_out = analogRead(y_in);
//  z_out = analogRead(z_in);
//
//  Serial.print("X: ");
//  Serial.println(x_out);
//  Serial.print("Y: ");
//  Serial.println(y_out);
//  Serial.print("Z: ");
//  Serial.println(z_out);
//}

const int xpin = A3; // x-axis of the accelerometer
const int ypin = A2; // y-axis
const int zpin = A1; // z-axis
 
void setup()
{
Serial.begin(9600);
}
 
void loop()
{
int x = analogRead(xpin); //read from xpin
delay(1); //
int y = analogRead(ypin); //read from ypin
delay(1);
int z = analogRead(zpin); //read from zpin

Serial.print(x);
Serial.print("\n");
Serial.print(y);
Serial.print("\n");
Serial.print(z);
Serial.print("\n");
Serial.print("\n");

delay(1000);
 
//float zero_G = 512.0; //ADC is 0~1023 the zero g output equal to Vs/2
//float scale = 102.3; //ADXL335330 Sensitivity is 330mv/g
////330 * 1024/3.3/1000
//Serial.print(((float)x - 331.5)/65*9.8); //print x value on serial monitor
//Serial.print("\t");
//Serial.print(((float)y - 329.5)/68.5*9.8); //print y value on serial monitor
//Serial.print("\t");
//Serial.print(((float)z - 340)/68*9.8); //print z value on serial monitor
//Serial.print("\n");
//delay(1000); //wait for 1 second
}
