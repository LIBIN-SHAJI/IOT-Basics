
int buttonPin = 7;
int ledPin = 13;
boolean on=false;
int buttonstate = 0; 

void setup() {
pinMode(ledPin,OUTPUT);
pinMode(buttonPin,INPUT);
  
}

void loop() { 
 buttonstate = digitalRead(buttonPin);
  if (buttonstate == HIGH)
      {
          if( on=false)
          { 
            on=false;
          }
      else
         { 
           on = true;
          }
        }
   if (on== true)
   {
    digitalWrite( ledPin,HIGH);
   }
   else
   {
    digitalWrite( ledPin,LOW);
   }
   delay(500);
   }
