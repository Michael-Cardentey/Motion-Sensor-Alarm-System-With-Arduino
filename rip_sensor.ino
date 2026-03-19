void setup() {
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
  delay(30000); // wait 30 seconds for sensor to calibrate on startup
}

void loop() {
  bool value = digitalRead(2);
  if (value == 1) {
    Serial.println("Motion Detected - Flashing!");
    digitalWrite(3, HIGH);
    delay(200);
    digitalWrite(3, LOW);
    delay(200);
  } else {
    Serial.println("No Motion");
    digitalWrite(3, LOW); // make sure LED is off when no motion
  }
}