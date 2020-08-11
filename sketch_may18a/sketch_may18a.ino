

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // 통신설정
  for(int i = 2;i<=9;i++){
    for(int j = 2;j<=9;j++){
      Serial.print(i);
      Serial.print(" * ");
      Serial.print(j);
      Serial.print(" = ");
      Serial.println(j*i);
    }
  Serial.println();
  }
}
  
void loop() {
  // put your main code here, to run repeatedly:

  
}
