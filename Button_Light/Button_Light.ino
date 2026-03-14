void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT);
  pinMode(2, INPUT);
}

void loop() {
  if(digitalRead(7) == HIGH){
    digitalWrite(12,HIGH);
    digitalWrite(2,LOW);
 }
  else{
    digitalWrite(12,LOW);
    digitalWrite(2,HIGH);
  }
  // put your main code here, to run repeatedly:

}
