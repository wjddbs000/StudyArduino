int gndPin = 2;
int vccPin = 3;
int sw_pin = 4;
void setup() {
  pinMode(sw_pin,INPUT_PULLUP);
  pinMode(gndPin,OUTPUT);
  pinMode(vccPin,OUTPUT);
  digitalWrite(gndPin,HIGH);
  digitalWrite(vccPin,LOW);
  Serial.begin(115200);

}

void loop() {
  Serial.println(digitalRead(sw_pin));
  delay(200);
}
