#include <Ultrasonic.h>
#include <Wire.h>
#include "rgb_lcd.h"
#define TRIGGER_PIN  3
#define ECHO_PIN     5


const int colorR = 255;
const int colorG = 0;
const int colorB = 0;
Ultrasonic ultrasonic(TRIGGER_PIN, ECHO_PIN);
rgb_lcd lcd;


void setup()
  {
  Serial.begin(9600);
  // set up the LCD's number of columns and rows:
    lcd.begin(16, 2);
    
    lcd.setRGB(colorR, colorG, colorB);
    
  }

void loop()
  {
    
  float cmMsec, inMsec;
  long microsec = ultrasonic.timing();

  cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);
  Serial.print("MS: ");
  Serial.print(microsec);
  Serial.print(", CM: ");
  delay(1000);

  if(cmMsec>0 && cmMsec<=5){
  const int colorR = 255;
  const int colorG = 0;
  const int colorB = 255;
   lcd.setRGB(colorR, colorG, colorB);
  }
  else if(cmMsec>5 && cmMsec<=10){
  const int colorR = 255;
  const int colorG = 255;
  const int colorB = 0;
   lcd.setRGB(colorR, colorG, colorB);
  }
 else if(cmMsec>10 && cmMsec<=15){
  const int colorR = 0;
  const int colorG = 139;
  const int colorB = 139;
   lcd.setRGB(colorR, colorG, colorB);
  }
  else if(cmMsec>15){
  const int colorR = 255;
  const int colorG = 140;
  const int colorB = 0;
   lcd.setRGB(colorR, colorG, colorB);
  }

   lcd.setCursor(0, 1);
    // print the number of seconds since reset:
    lcd.print(cmMsec);
    
    delay(1000);
  }
