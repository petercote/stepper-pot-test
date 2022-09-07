#define directionPin 2
#define stepPin 3
int stepperPot=A0;
int ballFrequency;
int rotorSpeed;

void setup() {
  // put your setup code here, to run once:
  pinMode(directionPin,OUTPUT);
  pinMode(stepPin, OUTPUT);
  pinMode(stepperPot,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
ballFrequency=analogRead(stepperPot);
rotorSpeed=(ballFrequency*.831)+150;
Serial.println(rotorSpeed);

    digitalWrite(directionPin,HIGH);
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(50);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(rotorSpeed); 
}
