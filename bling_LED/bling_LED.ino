void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
}
 
void loop() {
  // put your main code here, to run repeatedly:
  int i=0;
  for(i=0;i<17;i++){
  digitalWrite(13,HIGH);
  delay(10);
  digitalWrite(13,LOW);
  delay(100);
  }
  delay(11000);
}

