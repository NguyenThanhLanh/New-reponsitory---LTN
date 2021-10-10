int a = 13;
void setup(){
      pinMode(a,OUTPUT);
      Serial.begin(9600);
}

void loop()
{
    int x = analogRead(A0);
    int t = map(x, 0,410,-50, 150);
    if(t >= 36) 
      digitalWrite(a,HIGH);
    else
      digitalWrite(a,LOW);
      delay(100);  
}
