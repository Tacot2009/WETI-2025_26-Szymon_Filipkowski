void setup() {
  Serial.begin(115200);
  Serial.println("System gotowy do odbioru danych...");
}

void loop() {
  if (Serial.available() > 0) {
    String message = Serial.readStringUntil('\n');
    message.trim();
    Serial.println(message);
  }
}