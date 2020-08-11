int vccPin = 12;
int gndPin = 11;
int sensorPin = 13;
int Value = 0;
void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(vccPin,OUTPUT);
  pinMode(gndPin,OUTPUT);
  pinMode(sensorPin,INPUT);
  digitalWrite(vccPin,HIGH);
  digitalWrite(gndPin,LOW);
  Serial.begin(9600);
}
int i = 2;
void loop() {
  Value = digitalRead(sensorPin);
  if(Value==1){digitalWrite(3,HIGH);}
  else digitalWrite(3,LOW);
  
  delay(100);
}
