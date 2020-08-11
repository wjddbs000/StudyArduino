void setup() {
  Serial.begin(9600);
  pinMode(A0,OUTPUT);
  pinMode(A1,OUTPUT);
  pinMode(A4,INPUT_PULLUP);
  digitalWrite(A0,LOW);
  digitalWrite(A1,HIGH);
}
int a=0,b=0,c=0;
void loop() {
   delay(200);
  int x  = map(analogRead(A2),3,1018,0,10);
  int y  = map(analogRead(A3),3,1018,0,10);
  int sw = digitalRead(A4);

  
   if(x>6){a++;}
   else if(x<4){a--;}
  if(y>5){b++;}
   else if(y<3){b--;}
   
  Serial.print("x : ");
  Serial.print(a);
  Serial.print(" y : ");
  Serial.print(b);
  Serial.print(" sw : ");
  if(!sw){
    c++;
  }
  Serial.println(c);
}
