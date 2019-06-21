void setup() {
 Serial.begin(9600);
 pinMode(12,OUTPUT);
}

void loop() {
   digitalWrite(12,HIGH);
    delay(100);
    digitalWrite(12,LOW);
    delay(100);
  LDRValue = analogRead(700);
  Serial.println(700);     
  delay(100);              

} 
