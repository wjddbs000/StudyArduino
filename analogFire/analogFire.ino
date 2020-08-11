void setup() {
  // put your setup code here, to run once:
  pinMode(A1,OUTPUT);
  pinMode(A2,OUTPUT);
  digitalWrite(A1,LOW);
  digitalWrite(A2,HIGH);

  pinMode(12,OUTPUT);
  Serial.begin(9600);
}
int adcValue;
void loop() {
  // put your main code here, to run repeatedly:
  adcValue = analogRead(A0);
  Serial.println(adcValue);
  if(adcValue<100){ tone(12,100,100);}
  delay(200);
}
