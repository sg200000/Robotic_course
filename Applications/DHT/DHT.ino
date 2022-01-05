#include <DHT.h>
#define DHT11PIN 4
#define DHTTYPE DHT11

DHT dht(DHT11PIN,DHTTYPE);

void setup()
{
  Serial.begin(9600);
  dht.begin();
 
}

void loop()
{
  Serial.println();

  float hum = dht.readHumidity();
  float temp = dht.readTemperature();
  

  Serial.print("Humidity (%): ");
  Serial.println(hum);

  Serial.print("Temperature (C): ");
  Serial.println(temp);

  delay(2000);

}
