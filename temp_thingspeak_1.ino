#include <ESP8266WiFi.h>
#include <ThingSpeak.h>
long myChannelNumber = 2050265;
const char myWriteAPIKey[] = "3TPHJDMP2ST7IXUX"; 
const char* ssid = "Aarya N.";
const char* password = "yourpassword" ;
const char* server = "api.thingspeak.com";
float resolution=3.3/1023;
WiFiClient client;

void setup() {
  pinMode(A0,INPUT);
  Serial.begin(115200);
  WiFi.disconnect();
  delay(10);
  WiFi.begin(ssid, password);

  Serial.println();
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("NodeMcu connected to wifi...");
  Serial.println(ssid);
  Serial.println();
}

void loop() {
  float temp = ((analogRead(A0) * resolution) * 100)+23.89;
  float fahrenheit = ((temp*9)/5)+32;
  if (client.connect(server,80)) {
    String tsData1 = myWriteAPIKey;
    String tsData2 = myWriteAPIKey;
    tsData1 +="&field1=";
    tsData2 +="&field2=";
    tsData1 += String(temp);
    tsData2 += String(fahrenheit);
    tsData1 += "\r\n\r\n";
    tsData2 += "\r\n\r\n";
    client.print("POST /update HTTP/1.1\n");
    client.print("Host: api.thingspeak.com\n");
    client.print("Connection: close\n");
    client.print("X-THINGSPEAKAPIKEY: "+myWriteAPIKey+"\n");
    client.print("Content-Type: application/x-www-form-urlencoded\n");
    client.print("Content-Length: ");
    client.print(tsData1.length());
     client.print(tsData2.length());
    client.print("\n\n");
    client.print(tsData1);
    client.print("\n\n");
    client.print(tsData2);
    Serial.print("Temperature: ");
    Serial.print(temp);
    Serial.println("uploaded to Thingspeak server....");
     Serial.print("Fahrenheit: ");
    Serial.print(fahrenheit);
    Serial.println("uploaded to Thingspeak server....");
    ThingSpeak.writeField(myChannelNumber, 1, temp, myWriteAPIKey);
    ThingSpeak.writeField(myChannelNumber, 2, fahrenheit, myWriteAPIKey);
  }
  client.stop();

  Serial.println("Waiting to upload next reading...");
  Serial.println();
  delay(1000);
}
