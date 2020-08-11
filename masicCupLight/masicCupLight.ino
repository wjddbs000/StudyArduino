void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(12,INPUT);
  pinMode(11,OUTPUT);
  digitalWrite(13,HIGH);
  Serial.begin(9600);
}
int a;
int b=0;
void loop() {
  // put your main code here, to run repeatedly:
  a=digitalRead(12);
  Serial.print(a);Serial.print('/');
  Serial.println(b);
  if(a){
    if(b<255){b=b+5;}
  }
  else{
    if(b>0){b=b-5;}
  }
  analogWrite(11,b);
  delay(100);
}
