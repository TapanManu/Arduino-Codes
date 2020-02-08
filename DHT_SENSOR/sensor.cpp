#include<DHT.h>
DHT dht(8,DHT22); //Initiate DHT Sensor
float humidity;   //stores humidity value
float temp;       //stores temperature
value
void setup()
{
  Serial.Begin(9600);
  dht.begin();
}
void loop()
{
  //read data from the sensor and store it to variables humidity and temperature
  humidity=dht.readHumidity();
  temp=dht.readTemperature();
  //Print temperature and humidity values to a serial monitor
  Serial.print("Humidity:");
  Serial.print(Humidity);
  Serial.print("% Temperature:");
  Serial.print(temperature);
  Serial.println("Celsius");
  delay(2000); //delay of 2 seconds
   
   
  


