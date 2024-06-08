void setup() {
  pinMode(2,OUTPUT);//first LED(L1)
  pinMode(3,OUTPUT);//second LED(L2)
  pinMode(4,OUTPUT);//third LED(L3)
  pinMode(5,OUTPUT);//fourth LED(L4)
  pinMode(6,OUTPUT);//fifth LED(L5)
}
void loop() {
  delay(200);
  digitalWrite(2,HIGH);//first LED is turned on 
  digitalWrite(6,LOW);//last LED is turned off 
  delay(200);
  digitalWrite(3,HIGH);//second LED is turned on
  digitalWrite(2,LOW);//first LED is turned off
  delay(200);
  digitalWrite(4,HIGH);//third LED is turned on
  digitalWrite(3,LOW);//second LED is turned off
  delay(200);
  digitalWrite(5,HIGH);//fourth LED is turned on
  digitalWrite(4,LOW);//third LED is turned off
  delay(200);
  digitalWrite(6,HIGH);//fifth LED is turned on
  digitalWrite(5,LOW);//fourth LED is turned off
}
