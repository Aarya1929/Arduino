void setup() {
  pinMode(2,OUTPUT);//1st set green
  pinMode(3,OUTPUT);//1st set yellow
  pinMode(4,OUTPUT);//1st set red
  pinMode(5,OUTPUT);//2nd set green
  pinMode(6,OUTPUT);//2nd set yellow
  pinMode(7,OUTPUT);//2nd set red
  pinMode(8,OUTPUT);//3rd set green
  pinMode(9,OUTPUT);//3rd set yellow
  pinMode(10,OUTPUT);//3rd set red
}
void loop()
{
  digitalWrite(2,HIGH); //enables the 1st set of signals
  digitalWrite(7,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  digitalWrite(6,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW); 
  digitalWrite(5,LOW);
  delay(5000);
  digitalWrite(3,HIGH); //enables the yellow lights
  digitalWrite(7,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(2,LOW);
  delay(2000);
  digitalWrite(4,HIGH); //enables the 2nd set of signals
  digitalWrite(5,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(6,LOW);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(7,LOW);
  delay(5000);
  digitalWrite(9,LOW); //enables the yellow lights
  digitalWrite(6,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(4,HIGH);
  delay(2000);
  digitalWrite(8,HIGH); //enables the 3rd set of signals
  digitalWrite(4,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  delay(5000);
  digitalWrite(9,HIGH); //enables the yellow lights
  digitalWrite(3,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(4,HIGH);
  delay(2000);
}
