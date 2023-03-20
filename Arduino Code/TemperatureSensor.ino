#include <LiquidCrystal.h>
LiquidCrystal lcd( 9, 8, 4, 5, 6, 7); //(Rs,E,D4,D5,D6,D7)
int inputPin = A0;
int sensorRead;
float temperature;
float volt;
void setup()
{
pinMode(inputPin,INPUT);
Serial.begin(9600);  
 lcd.begin(16,2);
 lcd.setCursor(4,0);
 lcd.print("Welcome");
 
}
void loop()
{
   sensorRead = analogRead(inputPin);
   volt= sensorRead *(5.0/1023);
   temperature=volt/0.01;
    delay(500);
   lcd.setCursor(0,0);
   lcd.print(temperature);
}
