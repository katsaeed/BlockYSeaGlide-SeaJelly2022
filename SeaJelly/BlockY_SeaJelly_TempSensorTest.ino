//Katherine Saeed
//08 March 2022

const byte tempPin = A2; //temperature pin

void setup() {
  Serial.begin(115200); //for OpenLog
  Serial.begin(9600); //for serial monitor
}

void loop() {
  temp = map(analogRead(tempPin), 0, 1023, -10, 125) * (9.0 / 5.0) + 32.0; //we don't really understand this yet
  Serial.println(temp);
  delay(1000);
}
