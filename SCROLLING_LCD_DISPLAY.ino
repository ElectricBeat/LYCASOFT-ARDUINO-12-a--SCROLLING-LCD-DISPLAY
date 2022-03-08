#include <LiquidCrystal.h> 
//LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

LiquidCrystal lcd(10, 9, 8, 7, 6, 5);
void setup() 
{
  lcd.begin(16, 2);
}
void loop() 
{
  lcd.setCursor(0,0);
  lcd.print("Welcome to Sri Electronics");
   delay(2000);
   
  lcd.scrollDisplayLeft();
  delay(500);
}
