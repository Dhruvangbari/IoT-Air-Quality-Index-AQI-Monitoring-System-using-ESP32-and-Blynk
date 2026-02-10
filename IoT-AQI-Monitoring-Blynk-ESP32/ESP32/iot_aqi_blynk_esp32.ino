/*
 IoT AQI Monitoring System with Mobile App using Blynk
*/

#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

char auth[] = "YOUR_BLYNK_AUTH_TOKEN";
char ssid[] = "YOUR_WIFI_NAME";
char pass[] = "YOUR_WIFI_PASSWORD";

#define AIR_SENSOR 34
#define BUZZER 25
#define RED_LED 26
#define GREEN_LED 27

int airValue = 0;
int threshold = 2000;

BlynkTimer timer;

void sendAQIData() {
  airValue = analogRead(AIR_SENSOR);
  Blynk.virtualWrite(V0, airValue);

  if (airValue > threshold) {
    digitalWrite(RED_LED, HIGH);
    digitalWrite(GREEN_LED, LOW);
    digitalWrite(BUZZER, HIGH);
    Blynk.virtualWrite(V1, 255);
    Blynk.logEvent("bad_air", "Poor Air Quality Detected!");
  } else {
    digitalWrite(RED_LED, LOW);
    digitalWrite(GREEN_LED, HIGH);
    digitalWrite(BUZZER, LOW);
    Blynk.virtualWrite(V1, 0);
  }
}

void setup() {
  Serial.begin(9600);
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(BUZZER, OUTPUT);

  Blynk.begin(auth, ssid, pass);
  timer.setInterval(2000L, sendAQIData);
}

void loop() {
  Blynk.run();
  timer.run();
}
