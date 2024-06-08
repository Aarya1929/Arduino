void setup() 
{
   pinMode(2,OUTPUT);//LED1
   pinMode(3,OUTPUT);//LED2
}
void loop() 
{
 digitalWrite(2,HIGH);//LED1 is turned ON 
 digitalWrite(3,LOW);//LED2 is turned OFF(at the same time)
 delay(1000);
 digitalWrite(3,HIGH);//LED2 is turned ON
 digitalWrite(2,LOW);//LED1 is turned OFF
 delay(1000);
}
