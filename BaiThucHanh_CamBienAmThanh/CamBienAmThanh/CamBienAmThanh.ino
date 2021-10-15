#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
#define sensor 10
#define led 7
void setup()
{
  Serial.begin(9600);
  pinMode(sensor, INPUT);
  pinMode(led, OUTPUT);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("  Sound Sensor");
}
void loop()
{
  Serial.println(digitalRead(sensor));
  digitalWrite(led, digitalRead(sensor));
  lcd.setCursor(0, 1);
  if (digitalRead(sensor) == 1)
  {
    lcd.print("Noise");
  }
  else
  {
    lcd.print("Quiet");
  }
}
