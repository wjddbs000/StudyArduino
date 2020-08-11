#include <DHT.h>
#define DHTTYPE DHT11
int gndPin=8;
int vccPin=9;
int dhtPin=10;
DHT dht(dhtPin,DHTTYPE);

void setup() {
  Serial.begin(9600);
  pinMode(gndPin,OUTPUT);
  pinMode(vccPin,OUTPUT);

  digitalWrite(gndPin,LOW);
  digitalWrite(vccPin,HIGH);

  //dht.begin();
}

void loop() {
  delay(1000);
  float fT = dht.readTemperature();
  float fH = dht.readHumidity();
  if(isnan(fT)||isnan(fH)){
    Serial.println("Failed to read from DHT");
  }
  Serial.print("TEMP : ");
  Serial.print(fT);
  Serial.print("[C]\t HUMID : ");
  Serial.print(fH);
  Serial.println("[%]");
 
}
