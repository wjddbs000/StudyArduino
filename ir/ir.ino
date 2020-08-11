void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(3,OUTPUT);
  pinMode(4,INPUT);
  pinMode(5,OUTPUT);
  digitalWrite(3,HIGH);
  digitalWrite(5,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(digitalRead(4));
}
