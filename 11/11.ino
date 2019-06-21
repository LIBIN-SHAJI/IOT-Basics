void setup() {
 Serial.begin(9600);
 pinMode(11, OUTPUT);

}

void loop() 
{  
int x = analogRead(A0);
x=map(x,20,145,0,200 );
analogWrite(11,x);

Serial.println(x);


}
