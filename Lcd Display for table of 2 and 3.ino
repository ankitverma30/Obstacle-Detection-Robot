int i;
#include <LiquidCrystal.h>
LiquidCrystal lcd(2,3,4,5,6,7); //rs,e,d4,d5,d6,d7
void setup() {
  // put your setup code here, to run once:
 lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
   lcd.setCursor(0,0);
  lcd.print("Table of 2 & 3");
  delay(500);
  for(i=1;i<=10;i++)
  {
      lcd.setCursor(0,0);
      lcd.print("2");
      lcd.setCursor(1,0);
      lcd.print("X");
      lcd.setCursor(2,0);
      lcd.print(i);
      lcd.setCursor(3,0);
      lcd.print("=");
      lcd.setCursor(4,0);
      lcd.print(2*i);
   
      delay(500);
      lcd.clear();
 }
    
}
