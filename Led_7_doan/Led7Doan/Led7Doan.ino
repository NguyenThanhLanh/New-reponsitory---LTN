int a = 6, b=5, c=4, d=3, e=2,f=1, g=0;
void setup(){
  pinMode(a,OUTPUT); pinMode(b,OUTPUT); pinMode(c,OUTPUT);
  pinMode(d,OUTPUT); pinMode(e,OUTPUT); pinMode(f,OUTPUT); pinMode(g,OUTPUT);
}
void Khong(){
  digitalWrite(a, HIGH); digitalWrite(b, HIGH); digitalWrite(c, HIGH);
  digitalWrite(d, HIGH); digitalWrite(e, HIGH); digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
}
void Mot(){
  digitalWrite(a, LOW); digitalWrite(b, HIGH); digitalWrite(c, HIGH);
  digitalWrite(d, LOW);digitalWrite(e, LOW);digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}
void Hai(){
  digitalWrite(a, HIGH); digitalWrite(b, HIGH); digitalWrite(c, LOW);
  digitalWrite(d, HIGH);digitalWrite(e, HIGH);digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
}
void Ba(){
  digitalWrite(a, HIGH); digitalWrite(b, HIGH); digitalWrite(c, HIGH);
  digitalWrite(d, HIGH); digitalWrite(e, LOW); digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
}
void Bon(){
  digitalWrite(a, LOW); digitalWrite(b, HIGH); digitalWrite(c, HIGH);
  digitalWrite(d, LOW); digitalWrite(e, LOW); digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}
void Nam(){
  digitalWrite(a, HIGH); digitalWrite(b, LOW); digitalWrite(c, HIGH);
  digitalWrite(d, HIGH); digitalWrite(e, LOW); digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}
void Sau(){
  digitalWrite(a, HIGH); digitalWrite(b, LOW); digitalWrite(c, HIGH);
  digitalWrite(d, HIGH); digitalWrite(e, HIGH); digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}
void Bay(){
  digitalWrite(a, HIGH); digitalWrite(b, HIGH); digitalWrite(c, HIGH);
  digitalWrite(d, LOW); digitalWrite(e, LOW); digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}
void Tam(){
  digitalWrite(a, HIGH); digitalWrite(b, HIGH); digitalWrite(c, HIGH);
  digitalWrite(d, HIGH); digitalWrite(e, HIGH); digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}
void Chin(){
  digitalWrite(a, HIGH); digitalWrite(b, HIGH); digitalWrite(c, HIGH);
  digitalWrite(d, HIGH); digitalWrite(e, LOW); digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}
void loop(){
  Khong();
  delay(1000);
  Mot();
  delay(1000);
  Hai();
  delay(1000);
  Ba();
  delay(1000);
  Bon();
  delay(1000);
  Nam();
  delay(1000);
  Sau();
  delay(1000);
  Bay();
  delay(1000);
  Tam();
  delay(1000);
  Chin();
  delay(1000);
}
