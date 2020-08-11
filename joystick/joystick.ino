void setup() {
  Serial.begin(9600);
  //joystick
  pinMode(A0,OUTPUT);
  pinMode(A1,OUTPUT);
  pinMode(A4,INPUT_PULLUP);
  digitalWrite(A0,LOW);
  digitalWrite(A1,HIGH);
  //tone
  pinMode(8,OUTPUT);
  pinMode(10,OUTPUT);
  digitalWrite(8,LOW);
}

void loop() {
  delay(200);
  int x  = map(analogRead(A2),3,1018,0,10);
  int y  = map(analogRead(A3),3,1018,0,10);
  int sw = digitalRead(A4);
  
  Serial.print("x : ");
  Serial.print(x);
  Serial.print(" y : ");
  Serial.print(y);
  Serial.print(" sw : ");
  if(!sw){
    Serial.print("PUSHED");
  }
  Serial.println();
  
  if(x<3)tone(10,100,100);
}
