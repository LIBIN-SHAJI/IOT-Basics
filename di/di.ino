void setup() {
  Serial.begin(9600);
  pinMode(13,INPUT);
  pinMode(3,OUTPUT);
}

void loop() {
  int val;
  val=digitalRead(3);
  if(val==1)
  {
    digitalWrite(13,HIGH);
    delay(1000);
    digitalWrite(13,LOW);
    delay(1000);
   }
   else
   digitalWrite(13,LOW);
}
