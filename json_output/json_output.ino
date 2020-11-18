#include <ArduinoJson.h>

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if (Serial.read() == 'j'){
  DynamicJsonBuffer jBuffer;
  JsonObject& root = jBuffer.createObject();
  root["day"] = "Monday";
  int temp = 22;
  int humidity = 52;

  root["temperature"] = temp;
  root["humidity"] = humidity;

  root.prettyPrintTo(Serial);
  Serial.println();
  }
}
