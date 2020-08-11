int gndPin = 2;
int vccPin = 3;
int swPin = 4;
int DTPin = 5;
int CLKPin = 6;
int oldA = digitalRead(DTPin);
int oldB = digitalRead(CLKPin);
int cnt = 0;
void setup() {
  Serial.begin(9600);
  pinMode(gndPin, OUTPUT);
  pinMode(vccPin, OUTPUT);
  pinMode(swPin, INPUT_PULLUP);
  pinMode(DTPin, INPUT);
  pinMode(CLKPin, INPUT);
  digitalWrite(gndPin, LOW);
  digitalWrite(vccPin, HIGH);
}

void loop() {
  int newA = digitalRead(DTPin);
  int newB = digitalRead(CLKPin);

  if (newA != oldA || newB != oldB) {
    if (oldA == LOW && newA == HIGH) {
      if (oldB == LOW) cnt += 1;
      else cnt -= 1;
    }
  }
  oldA = newA;
  oldB = newB;
  Serial.println(cnt);

}
