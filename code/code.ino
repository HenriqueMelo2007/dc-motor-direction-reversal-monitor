#include <LiquidCrystal.h>
 
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
 
void setup()
{
  lcd.begin(16, 2);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}
 
void loop()
{
  lcd.clear();

  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);

  lcd.setCursor(0, 0);
  lcd.print("Counterclockwise");

  delay(2000);

  lcd.clear();

  digitalWrite(7, LOW);
  digitalWrite(6, LOW);

  digitalWrite(7, LOW);
  digitalWrite(6, HIGH);
  
  lcd.setCursor(0, 0);
  lcd.print("Clockwise");

  delay(2000);  
}