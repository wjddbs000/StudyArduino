int gndPin = 2;
int vccPin = 3;
int swPin = 4;
int DTPin = 5;
int CLKPin = 6;
int oldA = digitalRead(DTPin);
int oldB = digitalRead(CLKPin);
int cnt = 0;
int lgndPin=12;
int rPin=11;
int gPin=10;
int bPin=9;
int a=0;
int b=255;
void setup() {
  Serial.begin(2000000);
  pinMode(gndPin, OUTPUT);
  pinMode(vccPin, OUTPUT);
  pinMode(swPin, INPUT_PULLUP);
  pinMode(DTPin, INPUT);
  pinMode(CLKPin, INPUT);
  digitalWrite(gndPin, LOW);
  digitalWrite(vccPin, HIGH);

  pinMode(rPin,OUTPUT);
  pinMode(gPin,OUTPUT);
  pinMode(bPin,OUTPUT);
  pinMode(lgndPin,OUTPUT);
  digitalWrite(lgndPin,LOW);
}

void loop() {
  int newA = digitalRead(DTPin);
  int newB = digitalRead(CLKPin);
  
  if (newA != oldA || newB != oldB) {
    if (oldA == LOW && newA == HIGH) {
      if (oldB == LOW){
        cnt += 1; 
        if(b<255){
          b=b+51;
        }
      }
      else{
        cnt -= 1;
        if(b>0){
          b=b-51;
        }
      }
    }
  }
  switch(a){
    case 1:
      analogWrite(rPin,b);
      break;
    case 2:
      analogWrite(gPin,b);
      break;
    case 3:
      analogWrite(bPin,b);
      break;
  }
  
  oldA = newA;
  oldB = newB;
  Serial.print("cnt : ");
  Serial.print(cnt);
  Serial.print(" a : ");
  Serial.print(a);
  Serial.print(" b : ");
  Serial.println(b);
  if(!digitalRead(swPin)){
     switch(a){
      case 0:
        analogWrite(rPin,b);
        a++;
        break;
      case 1:
        analogWrite(rPin,LOW);
        analogWrite(gPin,b);
        a++;
        break;
      case 2:
        analogWrite(gPin,LOW);
        analogWrite(bPin,b);
        a++;
        break;
      case 3:
        analogWrite(bPin,LOW);
        a=0;
        break;
     }
  delay(300);
  
  }
}
