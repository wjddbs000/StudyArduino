void setup() {
  // put your setup code here, to run once:
  pinMode(13, INPUT_PULLUP);// s
  pinMode(11, OUTPUT);// gnd = 0v
  pinMode(12,OUTPUT);//vcc = 5v
  
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  
  Serial.begin(9600);
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(5, LOW);
}
int i = 2;
void loop() {
  // put your main code here, to run repeatedly:
  
  if (!digitalRead(13)){    
    digitalWrite(i,LOW);
    i++;
    if(i>4){i=2;}
    delay(100);
    digitalWrite(i,HIGH);
    delay(500);
  }
}
