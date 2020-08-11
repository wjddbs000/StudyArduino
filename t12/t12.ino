#define A 262
#define B 294
#define C 330
#define D 349
#define E 392
#define F 440
#define G 494
int a=0,b=0,c=0,d=0;//인터럽트를 위한 플래그
int i=0; //melody 출력을 위한 변수
int note[] = {E,E,F,F,E,E,C,E,E,C,C,B,E,E,F,F,E,E,C,E,C,B,C,A};//melody
void setup() {
  Serial.begin(9600);
  //LED
  pinMode(13,OUTPUT);
  //joystick
  pinMode(A0,OUTPUT);//gnd
  pinMode(A1,OUTPUT);//vcc
  pinMode(2,INPUT_PULLUP);//sw
  digitalWrite(A0,LOW);
  digitalWrite(A1,HIGH);
  //tone
  pinMode(9,OUTPUT);
  pinMode(11,OUTPUT);
  digitalWrite(9,LOW);
  //monLight
  pinMode(13,OUTPUT);
  //ir
  pinMode(5,OUTPUT);
  pinMode(6,INPUT);
  pinMode(7,OUTPUT);
  digitalWrite(5,HIGH);
  digitalWrite(7,LOW);
  //interrupt
  attachInterrupt(0, blink, FALLING);
}
void loop() {
  int x  = map(analogRead(A2),3,1018,0,10);
  int y  = map(analogRead(A3),3,1018,0,10);

  if(x<2)a=1;
  Serial.print("Melody: ");
  if(a){
    
    tone(11,note[i],100);
    i++;
    Serial.print(" ON "); 
    if(i==23)i=0;
   }
   
  Serial.print("\tLED: ");
  if(x>9)b=1;
  if(b){
    digitalWrite(13,HIGH);
    Serial.print("ON ");
  }
  else{digitalWrite(13,LOW);}
  Serial.print("\tir: ");
  if(y>9)c=1;
  if(c){
    Serial.print("ON  "); 
    if(digitalRead(2))Serial.print("감지 안됨");
    else Serial.print("감지");
  }
  Serial.print("\tCDS:");
  if(y<2)d=1;
  if(d){
    Serial.print("ON "); 
    if(analogRead(A5)>10){      
      digitalWrite(13,HIGH);
    }
    else if(b==0 && analogRead(A5)==0){
      digitalWrite(13,LOW);
    }
  }
  
  Serial.println();
  delay(200);
}
void blink(){
  a=0;
  b=0;
  c=0;
  d=0;
  Serial.println("INTERRUPT");
}
