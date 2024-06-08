void setup() 
{
 pinMode(3,OUTPUT);//LED
 pinMode(A0,INPUT);//LDR
 Serial.begin(9600);
}
void loop() 
{
 int ldr=analogRead(A0);
 Serial.println(ldr);
 delay(100);
 analogWrite(3,ldr);
}
