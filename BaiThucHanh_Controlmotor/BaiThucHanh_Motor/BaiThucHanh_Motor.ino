#define switchPin 2 // chân công tắc
#define motorPin1 8 // L293D Input 1
#define motorPin2 7 // L293D Input 2
#define speedPin 9 // L293D enable chân 1
#define potPin 0 // chân biến trở nối với A0
int Mspeed = 0;
void setup() {
pinMode(switchPin, INPUT);
pinMode(motorPin1, OUTPUT);
pinMode(motorPin2, OUTPUT);
pinMode(speedPin, OUTPUT);
}
void loop() {
Mspeed = analogRead(potPin)/4;
analogWrite (speedPin, Mspeed);
if (digitalRead(switchPin)) {
digitalWrite(motorPin1, LOW);
digitalWrite(motorPin2, HIGH); }
else {
digitalWrite(motorPin1, HIGH);
digitalWrite(motorPin2, LOW);
}
}
