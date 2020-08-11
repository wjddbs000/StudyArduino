void setup() {
  Serial.begin(9600);
  pinMode(A1,OUTPUT);
  pinMode(A2,OUTPUT);
  pinMode(13,OUTPUT);
  digitalWrite(A1,LOW);
  digitalWrite(A2,HIGH);
}
int a;
void loop() {
  // put your main code here, to run repeatedly:
  a=digitalRead(A0);
  Serial.println(a);
  if(!a){digitalWrite(13,HIGH);}
  else{digitalWrite(13,LOW);}
  delay(100);
}
