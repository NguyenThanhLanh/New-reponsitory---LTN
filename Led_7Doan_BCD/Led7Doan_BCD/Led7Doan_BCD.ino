int A=0, B=1, C=2, D=3;
void setup()
{
  pinMode(A,OUTPUT); pinMode(B,OUTPUT);
  pinMode(C,OUTPUT); pinMode(D,OUTPUT);
}
void Khong(){
  digitalWrite(A,LOW); digitalWrite(B,LOW);
  digitalWrite(C,LOW); digitalWrite(D,LOW);
}
void Mot(){
  digitalWrite(A,LOW); digitalWrite(B,LOW);
   digitalWrite(C,LOW); digitalWrite(D,HIGH);
}
void Hai(){
   digitalWrite(A,LOW); digitalWrite(B,LOW);
   digitalWrite(C,HIGH); digitalWrite(D,LOW);
}
void Ba(){
   digitalWrite(A,LOW); digitalWrite(B,LOW);
   digitalWrite(C,HIGH); digitalWrite(D,HIGH);
}
void Bon(){
   digitalWrite(A,LOW); digitalWrite(B,HIGH);
   digitalWrite(C,LOW); digitalWrite(D,LOW);
}
void Nam(){
   digitalWrite(A,LOW); digitalWrite(B,HIGH);
   digitalWrite(C,LOW); digitalWrite(D,HIGH);
}
void Sau(){
   digitalWrite(A,LOW); digitalWrite(B,HIGH);
   digitalWrite(C,HIGH); digitalWrite(D,LOW);
}
void Bay(){
   digitalWrite(A,LOW); digitalWrite(B,HIGH);
   digitalWrite(C,HIGH); digitalWrite(D,HIGH);
}
void Tam(){
   digitalWrite(A,HIGH); digitalWrite(B,LOW);
   digitalWrite(C,LOW); digitalWrite(D,LOW);
}
void Chin(){
   digitalWrite(A,HIGH); digitalWrite(B,LOW);
   digitalWrite(C,LOW); digitalWrite(D,HIGH);
}
void loop(){
  Khong(); delay(1000);
  Mot();  delay(1000);
  Hai();  delay(1000);
  Ba();  delay(1000);
  Bon(); delay(1000);
  Nam();  delay(1000);
  Sau();  delay(1000);
  Bay();  delay(1000);
  Tam(); delay(1000);
  Chin(); delay(1000);
}
