//Katherine Saeed
//08 March 2022

//pins
static byte RED_LED = 9;
static byte GREEN_LED = 6;
static byte BLUE_LED = 5;
static byte LED_BASE = 7;

void setup() {
  //Serial.begin(9600); //serial monitor
  //Serial.begin(115200); //OpenLog
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);
  pinMode(LED_BASE, OUTPUT);
  ledRGB_Write(0,0,0);
}

void ledRGB_Write(byte R, byte G, byte B) {
  analogWrite(RED_LED, 255 - R);
  analogWrite(RED_LED, 255 - G);
  analogWrite(RED_LED, 255 - B);
}

void LEDFlash() {
  ledRGB_Write(255, 0, 0);
  delay(300);
  ledRGB_Write(0, 255, 0);
  delay(300);
  ledRGB_Write(0, 0, 255);
  delay(300);
}

void loop() {                                                                                   
  LEDFlash();
}
