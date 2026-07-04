#define BLYNK_TEMPLATE_ID "TMPL3JUb_1LSE"
#define BLYNK_TEMPLATE_NAME "ultra sonic sensor with lcd"
#define BLYNK_AUTH_TOKEN "98kty2NDnnaTGPySnOD2jVm4En-xd42k"

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

// Wi-Fi Credentials
char ssid[] = "Wokwi-GUEST";
char pass[] = "";

// LCD Initialization (I2C Address: 0x27, 16x2 Display)
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Ultrasonic Sensor Pins
#define TRIG_PIN 5
#define ECHO_PIN 18

void setup() {
  Serial.begin(115200);

  Wire.begin(21, 22);

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("Connecting...");
  lcd.setCursor(0, 1);
  lcd.print("Please Wait");

  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("WiFi Connected");
  delay(1500);
}

void loop() {
  Blynk.run();

  long duration;
  float distance;

  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);

  digitalWrite(TRIG_PIN, LOW);

  duration = pulseIn(ECHO_PIN, HIGH);

  distance = (duration * 0.0343) / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Distance:");

  lcd.setCursor(0, 1);
  lcd.print(distance, 2);
  lcd.print(" cm");

  Blynk.virtualWrite(V0, distance);

  delay(1000);
}
