//Katherine Saeed
//08 March 2022

//pins
static byte RED_LED = 9;
static byte GREEN_LED = 6;
static byte BLUE_LED = 5;
static byte LED_BASE = 7;

void setup() {
  Serial.begin(9600); //serial monitor
  Serial.begin(115200); //OpenLog
  //LED
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);
  pinMode(LED_BASE, OUTPUT);
}

void LEDFlash() {
  digitalWrite(LED_BASE, HIGH);
  delay(1000);
  digitalWrite(LED_BASE, LOW);
  digitalWrite(BLUE_LED, HIGH);
  delay(1000);
  digitalWrite(LED_BASE, LOW);
  digitalWrite(GREEN_LED, HIGH);
  delay(1000);
  digitalWrite(LED_BASE, LOW);
  digitalWrite(RED_LED, HIGH);
}

void loop() {
  LEDFlash();
}
