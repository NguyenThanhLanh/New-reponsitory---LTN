int X = 0;
void setup() {
  pinMode(A0, INPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  X = analogRead(A0);
  int brightness = map(X,0,1023,0,255);
  analogWrite(9, brightness);
}
