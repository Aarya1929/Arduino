//try F and R
#include <LiquidCrystal.h>
float time1,distance;
int rs=12,en=11,d4=5,d5=4,d6=3,d7=2;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

void setup() 
{
  pinMode(6,OUTPUT); //Trigger Pin
  pinMode(7,INPUT); //Echo Pin
  pinMode(10,OUTPUT);//Motor pins
  pinMode(8,OUTPUT);
  Serial.begin(9600);
  lcd.begin(16,2);
}

void loop() 
{
  digitalWrite(6,LOW);
  delayMicroseconds(2);
  digitalWrite(6,HIGH);
  delayMicroseconds(10); //Generate Pulse to Trigger
  digitalWrite(6,LOW);

  time1 = pulseIn(7,HIGH); //Measure time of Echo

  distance = (0.034*time1)/2 ; //Distance Calculation

  float count=1024*(distance/150);//distance range is only 150cm
  if (count<=75)
  {
  analogWrite(10,count);
  digitalWrite(8,LOW);
  //delay(2000);
  }
  else
  {
  analogWrite(8,count);
  digitalWrite(10,LOW);
  //delay(2000);
  }
  Serial.print("Distance is = ");
  Serial.print(distance);
  Serial.println(" cm");
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Distance = ");
  lcd.print(distance);
  lcd.print(" cm");
  delay(200);
}
