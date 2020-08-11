int Do =131;
int le = 147;
int mi = 165;
int pa = 174;
int sol = 195;
int la = 220;
int si = 247;
int ddo = 262;
void setup() {
  Serial.begin(9600);
  pinMode(8,OUTPUT);
  pinMode(10,OUTPUT);
  digitalWrite(8,LOW);
  
}
int a[]={sol,mi,mi,pa,le,le,Do,le,mi,pa,sol,sol,sol,0};
char i;
void loop() {
  i = Serial.read();
  Serial.println(i);
  switch(i){
    case '1':
      tone(10,Do,300);
      break;
    case '2':
      tone(10,le,300);
      break;
    case '3':
      tone(10,mi,300);
      break;
    case '4':
      tone(10,pa,300);
      break;
    case '5':
      tone(10,sol,300);
      break;
    case '6':
      tone(10,la,300);
      break;
    case '7':
      tone(10,si,300);
      break;
    case '8':
      tone(10,ddo,300);
      break;  
    case ' ':
      delay(300);
      break;  
  }
  delay(500);
  
}
