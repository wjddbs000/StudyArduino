void setup() {
  // put your setup code here, to run once:
  pinMode(10,OUTPUT);
  pinMode(8,INPUT);
  pinMode(9,OUTPUT);
  pinMode(13,OUTPUT);
  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);

  Serial.begin(9600);

}
int Value=0;
void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("sensor:");
  Serial.println(digitalRead(8));
  if(digitalRead(8)){digitalWrite(13,HIGH);Serial.println("침입자 발생");}
  else{digitalWrite(13,LOW);}
  delay(200);
  
}
