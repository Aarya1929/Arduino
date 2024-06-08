void setup() {
  Serial.begin(9600);
  pinMode(D1,OUTPUT); // initialize digital pin LED_BUILTIN as an output.
  pinMode(D3,OUTPUT);
  pinMode(D5,OUTPUT);
  pinMode(D7,OUTPUT);
}

// the loop function runs over and over again forever

void loop() {

  digitalWrite(D1, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(D3, LOW);
  digitalWrite(D5, LOW);
  digitalWrite(D7, LOW);

  delay(500);                       // wait for a second

  digitalWrite(D1, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(D3, HIGH);
  digitalWrite(D5, LOW);
  digitalWrite(D7, LOW);

  delay(500);                       // wait for a second

  digitalWrite(D1, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(D3, LOW);
  digitalWrite(D5, HIGH);
  digitalWrite(D7, LOW);

  delay(500);                       // wait for a second

  digitalWrite(D1, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(D3, LOW);
  digitalWrite(D5, LOW);
  digitalWrite(D7, HIGH);

  delay(500);
         break;
}
