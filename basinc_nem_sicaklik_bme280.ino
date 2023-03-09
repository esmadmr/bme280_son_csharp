#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BME280.h>

#define SEALEVELPRESSURE_HPA (1013.25)

Adafruit_BME280 bme;

void setup() {
  Serial.begin(9600);

  if (!bme.begin(0x76)) {
    Serial.println("BME280 SENSÖRÜ BULUNAMADI, BAĞLANTIYI KONTROL EDİNİZ! 3.3V kullanmayı unutmayın**");
    while (1)
      ;
  }
}

void loop() {

  
  Serial.print(sicaklik);
  Serial.print(",");
  Serial.print(nem);
  Serial.print(",");
  Serial.println(basinc);

  //Serial.println("P1,24.55,70.5,1025.2\r");
//Serial.println("P2,2.3,5.4,-9.8");


  //   Serial.print("Sicaklik = ");
  // Serial.print(bme.readTemperature());
  // Serial.println("*C");

  // Serial.print("Basinc = ");
  // Serial.print(bme.readPressure() / 100.0F);
  // Serial.println("hPa");

  // Serial.print("Irtifa = ");
  // Serial.print(bme.readAltitude(SEALEVELPRESSURE_HPA));
  // Serial.println("m");

  // Serial.print("Nem = ");
  // Serial.print(bme.readHumidity());
  // Serial.println("%");

  // Serial.println();
  delay(1000);
}