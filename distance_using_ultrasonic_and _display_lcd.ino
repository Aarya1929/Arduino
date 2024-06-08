#include <LiquidCrystal.h>
float time1,distance;
int rs=12,en=11,d4=5,d5=4,d6=3,d7=2;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
void setup() 
{
  pinMode(6,OUTPUT); //Trigger Pin
  pinMode(7,INPUT); //Echo Pin
  Serial.begin(9600);
  lcd.begin(16,2);
}
void loop() 
{
  digitalWrite(6,HIGH);
  delayMicroseconds(10); //Generate Pulse to Trigger
  digitalWrite(6,LOW);
  time1 = pulseIn(7,HIGH); //Measure time of Echo
  distance = 0.017*time1 ; //Distance Calculation
  Serial.print("Distance=");
  Serial.print(distance);
  Serial.println("cm");
  delay(500);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Distance=");
  lcd.print(distance);
  lcd.print("cm");
}
