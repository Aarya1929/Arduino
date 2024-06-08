void setup() 
{
  pinMode(2,OUTPUT);//LED1(L1)
  pinMode(3,OUTPUT);//LED2(L2)
  pinMode(4,OUTPUT);//LED3(L3)
  pinMode(5,OUTPUT);//LED4(L4)
  pinMode(6,OUTPUT);//LED5(L5)
}
void loop() 
{
  delay(1000);
  digitalWrite(2,HIGH);//L1 turned ON
  delay(1000);
  digitalWrite(3,HIGH);//L2 turned ON
  delay(1000);
  digitalWrite(4,HIGH);//L3 turned ON
  delay(1000);
  digitalWrite(5,HIGH);//L4 turned ON
  delay(1000);
  digitalWrite(6,HIGH);//L5 turned ON
  delay(2000);
  digitalWrite(6,LOW);//L5 turned OFF
  delay(1000);
  digitalWrite(5,LOW);//L4 turned OFF
  delay(1000);
  digitalWrite(4,LOW);//L3 turned OFF
  delay(1000);
  digitalWrite(3,LOW);//L2 turned OFF
  delay(1000);
  digitalWrite(2,LOW);//L1 turned OFF
}
