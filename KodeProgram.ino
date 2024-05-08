#include <DHT.h>
#define DHTPIN 12
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  dht.begin();
}

void loop() {
  // put your main code here, to run repeatedly:

  float suhu = dht.readTemperature();
  float kelembaban = dht.readHumidity();

  Serial.print("Suhu: ");
  Serial.print(suhu);
  Serial.print("˚C");
  
  Serial.println("");

  Serial.print("Kelembaban: ");
  Serial.print(kelembaban);
  Serial.print("%");

  Serial.println("");

  delay(1618); // this speeds up the simulation
}
