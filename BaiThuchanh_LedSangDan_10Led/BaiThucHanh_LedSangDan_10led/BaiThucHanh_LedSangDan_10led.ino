byte LedPin [] = {4,5,6,7,8,9,10,11,12,13};
int direction = 1;
int currentLED = 0;
void setup(){
  for (int x = 0; x < 10; x++){
    pinMode(LedPin[x],OUTPUT);
  }
}
void loop(){
  for(int x = 0; x < 10; x++){
    digitalWrite( LedPin[x],LOW);
  }
  digitalWrite(LedPin[currentLED],HIGH);
  currentLED += direction;
  if (currentLED ==9)
    direction = -1;
  if (currentLED ==0)
    direction = 1;
  delay(500);
}
