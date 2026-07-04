#define BLYNK_TEMPLATE_ID "TMPL3uKU3-xoh"
#define BLYNK_TEMPLATE_NAME "7 SEGMENT"
#define BLYNK_AUTH_TOKEN "NOre_-DiqlqAVk7dz56UMhvammPPYvJ6"

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

// Wi-Fi Credentials
char ssid[] = "Wokwi-GUEST";
char pass[] = "";

// 7-Segment Display Pins
int a = 13;
int b = 12;
int c = 14;
int d = 27;
int e = 26;
int f = 32;
int g = 33;

// Display Digits (0-9)
void displayDigit(int num) {
  switch (num) {
    case 0:
      digitalWrite(a,HIGH); digitalWrite(b,HIGH); digitalWrite(c,HIGH);
      digitalWrite(d,HIGH); digitalWrite(e,HIGH); digitalWrite(f,HIGH);
      digitalWrite(g,LOW);
      break;

    case 1:
      digitalWrite(a,LOW); digitalWrite(b,HIGH); digitalWrite(c,HIGH);
      digitalWrite(d,LOW); digitalWrite(e,LOW); digitalWrite(f,LOW);
      digitalWrite(g,LOW);
      break;

    case 2:
      digitalWrite(a,HIGH); digitalWrite(b,HIGH); digitalWrite(c,LOW);
      digitalWrite(d,HIGH); digitalWrite(e,HIGH); digitalWrite(f,LOW);
      digitalWrite(g,HIGH);
      break;

    case 3:
      digitalWrite(a,HIGH); digitalWrite(b,HIGH); digitalWrite(c,HIGH);
      digitalWrite(d,HIGH); digitalWrite(e,LOW); digitalWrite(f,LOW);
      digitalWrite(g,HIGH);
      break;

    case 4:
      digitalWrite(a,LOW); digitalWrite(b,HIGH); digitalWrite(c,HIGH);
      digitalWrite(d,LOW); digitalWrite(e,LOW); digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      break;

    case 5:
      digitalWrite(a,HIGH); digitalWrite(b,LOW); digitalWrite(c,HIGH);
      digitalWrite(d,HIGH); digitalWrite(e,LOW); digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      break;

    case 6:
      digitalWrite(a,HIGH); digitalWrite(b,LOW); digitalWrite(c,HIGH);
      digitalWrite(d,HIGH); digitalWrite(e,HIGH); digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      break;

    case 7:
      digitalWrite(a,HIGH); digitalWrite(b,HIGH); digitalWrite(c,HIGH);
      digitalWrite(d,LOW); digitalWrite(e,LOW); digitalWrite(f,LOW);
      digitalWrite(g,LOW);
      break;

    case 8:
      digitalWrite(a,HIGH); digitalWrite(b,HIGH); digitalWrite(c,HIGH);
      digitalWrite(d,HIGH); digitalWrite(e,HIGH); digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      break;

    case 9:
      digitalWrite(a,HIGH); digitalWrite(b,HIGH); digitalWrite(c,HIGH);
      digitalWrite(d,HIGH); digitalWrite(e,LOW); digitalWrite(f,HIGH);
      digitalWrite(g,HIGH);
      break;
  }
}

// Receive value from Blynk Slider (V0)
BLYNK_WRITE(V0) {
  int num = param.asInt();

  Serial.print("Received from Blynk: ");
  Serial.println(num);

  if (num >= 0 && num <= 9) {
    displayDigit(num);
  }
}

void setup() {
  Serial.begin(115200);

  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);

  displayDigit(0);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop() {
  Blynk.run();
}
