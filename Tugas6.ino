const int mqPin = A14;
const int buzzerPin = 19;
const int threshold = 500;

void setup() {
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int gasValue = analogRead(mqPin);

  Serial.print("Nilai Gas: ");
  Serial.println(gasValue);

  if (gasValue > threshold) {
    tone(buzzerPin, 1000);
    Serial.println("Deteksi Gas!");
  } else {
    noTone(buzzerPin);
  }

  delay(1000);
}
