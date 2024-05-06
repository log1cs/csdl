/* This one have to be finished in roughly 2 days so I'll just use
   Arduino IDE for the convenient moment.

  Copyright (C) 2024, LycorisOSS. All right reserved.
*/

#include <ESP8266WiFi.h>
#include <ESPAsyncTCP.h>
#include <ESPAsyncWebServer.h>
#include <FS.h>

const char* ssid = "Tuan Anh";
const char* password = "tuananh2004";

// Create AsyncWebServer object on port 80
AsyncWebServer server(80);

void setup() {
  // Serial port for debugging purposes
  Serial.begin(9600);

  Serial.println("1.0.0 (c) LycorisOSS");
  Serial.println("All rights reserved.");

  // Initialize SPIFFS
  SPIFFS.begin() ? Serial.println("Mounting SPIFFS...") : Serial.println("Cannot mount SPIFFS.");

  // Connect to Wi-Fi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to access point.");
  }

  // Print ESP32 Local IP Address
  Serial.println(WiFi.localIP());

  // Route to load style.css file
  server.on("/global.css", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send(SPIFFS, "/global.css", "text/css");
  });

  // Route for root / web page
  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send(SPIFFS, "/index.html", "text/html");
  });

  // Route to load style.css file
  server.on("/index.css", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send(SPIFFS, "/index.css", "text/css");
  });

  server.begin();
}
 
void loop(){
}
