const int l_motor_pwm = 27; // left motor PWM pin
const int l_motor_dir = 14; // left motor direction pin
const int l_motor_channel = 3; // left motor PWM channel

const int r_motor_pwm = 26; // right motor PWM pin
const int r_motor_dir = 32; // right motor direction pin
const int r_motor_channel = 7; // right motor PWM channel

const int frequency = 5000; // PWM frequency
const int resolution = 8; // resolution in bits

void motor_setup(){

  ledcSetup(l_motor_channel, frequency, resolution); // setting up pwm channel with 5000 Hz frequency 8 bit resolution
  ledcSetup(r_motor_channel, frequency, resolution); 

  ledcAttachPin(l_motor_pwm, l_motor_channel); // connecting gpio pin 15 to channel 0
  ledcAttachPin(r_motor_pwm, r_motor_channel); // connecting gpio pin 33 to channel 1

  pinMode(l_motor_dir, OUTPUT);
  ledcWrite(l_motor_channel, 0); // setting initial motor duty cycles to 0 (motor no move at start)
  
  pinMode(r_motor_dir, OUTPUT);
  ledcWrite(r_motor_channel, 0);
  
}

void motor_loop(){

  ledcWrite(l_motor_channel, 0);
  digitalWrite(l_motor_dir, 1);
  
  ledcWrite(r_motor_channel, 0);
  digitalWrite(r_motor_dir, 1);
  
}
