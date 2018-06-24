int counter = 0;

void setup() {
  for (int pinNumber = 2; pinNumber < 10; pinNumber++) {
    pinMode(pinNumber, OUTPUT);
    digitalWrite(pinNumber, LOW);
  }
}

void loop() {
  if (counter == 256) {
    counter = 0;
  }

  for (int n = 0; n < 8; n++) {
    int b = bitRead(counter, n);
    digitalWrite(n+2, b==0? LOW : HIGH);
  }

  counter++;
  delay(1000);
}
