
int x = 0;
void setup()
{
  pinMode(2, INPUT);
    pinMode(13,OUTPUT);
}

void loop()
{
  x = digitalRead(2); // cho x la cong 2.
  if( x == HIGH) //Kiem tra nut co dang
  {
   digitalWrite(13, HIGH); //Bat den.
  }
  else
  {
    digitalWrite(13, LOW); //Tat den.
  }
  
    delay(10); // Delay a little bit to improve simulation performance
}
