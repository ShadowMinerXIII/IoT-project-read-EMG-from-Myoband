char EMG;
void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    EMG = Serial.read();
  }
}
