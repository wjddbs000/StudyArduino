
int val = 0;  // variable to store the value read

void setup() {
  Serial.begin(9600);           //  setup serial
  pinMode(A1,OUTPUT);
  pinMode(A2,OUTPUT);
  pinMode(A3,INPUT);
  digitalWrite(A1,HIGH);
  digitalWrite(A2,LOW);
  pinMode(13,OUTPUT);
}

void loop() {
  val = analogRead(A3);  // read the input pin
  Serial.println(val);          // debug value
  if(val>50){digitalWrite(13,HIGH);}
  else{digitalWrite(13,LOW);}
  
  
  delay(100);
  

}
