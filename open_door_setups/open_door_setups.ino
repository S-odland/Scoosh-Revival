int ledPin = 21;
int pinIn = A1;

int pinIn_value;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(pinIn, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Serial.print("Hello");
  digitalWrite(ledPin, HIGH);
  pinIn_value = analogRead(pinIn);

  Serial.print("pinIN: ");
  Serial.println(pinIn_value);

  delay(500);

  // Serial.println(" world!");
  digitalWrite(ledPin, LOW);
  pinIn_value = analogRead(pinIn);

  Serial.print("pinIN: ");
  Serial.println(pinIn_value);

  delay(500);
}
