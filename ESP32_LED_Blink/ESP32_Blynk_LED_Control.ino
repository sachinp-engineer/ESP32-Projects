#define BLYNK_TEMPLATE_ID "TMPL3M97C-tIL"
#define BLYNK_TEMPLATE_NAME "LED"
#define BLYNK_AUTH_TOKEN "YOUR_BLYNK_AUTH_TOKEN"

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

// Wi-Fi Credentials
char ssid[] = "Wokwi-GUEST";
char pass[] = "";

// LED connected to GPIO23
#define LED_PIN 23

// Runs whenever Virtual Pin V0 changes
BLYNK_WRITE(V0)
{
  int state = param.asInt();
  digitalWrite(LED_PIN, state);
}

void setup()
{
  Serial.begin(115200);

  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);

  // Connect to Wi-Fi and Blynk Cloud
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

  Serial.println("ESP32 Blynk LED Control Started");
}

void loop()
{
  Blynk.run();
}
