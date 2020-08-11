int Do = 261;
int le = 294;
int mi = 330;
int pa = 350;
int sol = 392;
int la = 440;
int si = 493;
int ddo = 524;
void setup() {
 
  pinMode(8,OUTPUT);
  pinMode(10,OUTPUT);
  digitalWrite(8,LOW);
  
}
int a[]={sol,mi,mi,pa,le,le,Do,le,mi,pa,sol,sol,sol,0};
int i;
void loop() {
  // put your main code here, to run repeatedly:
  for(i=0;i<sizeof(a)/sizeof(a[0]);i++){
    tone(10,a[i],300);
    delay(500);
  }
    

}
