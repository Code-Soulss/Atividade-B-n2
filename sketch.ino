#include <DHT.h>

#define DHTPIN 2  
#define DHTTYPE DHT22  

float latitude = -7.2050044222186855;  // Exemplo de latitude para IFCE CAMPUS CRATO
float longitude =-39.44799743351477;  // Exemplo de longitude para IFCE CAMPUS CRATO

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  delay(2000);  

  float temperature = dht.readTemperature();  
  float humidity = dht.readHumidity(); 

  Serial.print("Localização: ");
  Serial.print("Latitude: "); Serial.print(latitude, 6);
  Serial.print(", Longitude: "); Serial.println(longitude, 6);

  Serial.print("Temperatura: ");
  Serial.print(temperature);
  Serial.println(" °C");

  Serial.print("Umidade: ");
  Serial.print(humidity);
  Serial.println(" %");

  delay(5000);  
}
