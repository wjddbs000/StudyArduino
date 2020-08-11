void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int i = 2;
  do {Serial.println(i--);
  }while (i>0);
  Serial.println("--------------");
  while(i < 1){
    Serial.println(i++);  
  }
  Serial.println("--end--");
}

void loop() {

}
