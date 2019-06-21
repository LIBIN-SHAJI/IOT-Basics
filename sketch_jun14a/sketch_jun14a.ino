void setup() {
  for( int x=10;x<13;x++)
  { 
    pinMode(x,OUTPUT);
    }
   }

void loop() {
  for(int x=10;x<13;x++)
  {
    digitalWrite(x,HIGH);
    delay(100);
    digitalWrite(x,LOW);
    delay(100);
  }
  for(int x=13;x>10;x--)
  {
    digitalWrite(x,HIGH);
    delay(100);
    digitalWrite(x,LOW);
    delay(100);

  }
 for(int x=13;x>10;x--)
  {
    digitalWrite(x,LOW);
    delay(1000);
    
  }


}
