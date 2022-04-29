#include "rgb_lcd.h"

#define linha 2
#define coluna 16

rgb_lcd lcd;

#define POT A0
void setup() 
{
   pinMode(POT, INPUT);
   lcd.begin(coluna,linha);
   lcd.clear();
}

void loop() {

  float valorEntrda = analogRead(POT);
  valorEntrda = (valorEntrda * 5.0) / 1023.0;

  if (valorEntrda < 3) {
      lcd.setRGB(48, 213, 200);
      lcd.setCursor(0, 1);
      lcd.print(valorEntrda);
  }
   else {

    lcd.setRGB(0, 255, 255);
    lcd.setCursor(0, 1);
    lcd.print(valorEntrda);
   }

   
   
    




}
