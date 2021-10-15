int ldr = 9;
int led = 8;
void setup()
{
  pinMode(ldr, INPUT_PULLUP);
  pinMode(led, OUTPUT);
}
void loop()
{
  if(digitalRead(ldr) == HIGH)
  {
    digitalWrite(led, LOW);
  }
  else
  {
  digitalWrite(led, HIGH);
  }
}
