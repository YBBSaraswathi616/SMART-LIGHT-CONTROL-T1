char data;

void setup() {
  pinMode(13, OUTPUT);     // Set pin 13 as output
  Serial.begin(9600);      // Begin Serial communication
}

void loop() {
  if (Serial.available()) {
    data = Serial.read();
    if (data == '1') {
      digitalWrite(13, HIGH);  // Turn LED ON
    } else if (data == '0') {
      digitalWrite(13, LOW);   // Turn LED OFF
    }
  }
}
