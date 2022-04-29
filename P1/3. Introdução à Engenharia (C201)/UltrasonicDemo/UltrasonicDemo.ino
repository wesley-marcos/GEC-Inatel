#include <Ultrasonic.h>
#include <Wire.h>
#include "rgb_lcd.h"

#define TRIGGER_PIN  12
#define ECHO_PIN     13

rgb_lcd lcd;
const int numRows = 2;
const int numCols = 16;

Ultrasonic ultrasonic(TRIGGER_PIN, ECHO_PIN);

char dtaUart[15];
char dtaLen = 0;
float cm;

void setup()
  {
   Serial.begin(9600);
   lcd.begin(numCols,numRows);    

  }

void loop()
  {
  long microsec = ultrasonic.timing();

  cm = ultrasonic.convert(microsec, Ultrasonic::CM);
  Serial.print(", CM: ");
  Serial.print(cm);

  if ( cm <= 5)
  {
              lcd.setRGB(r, g, b);
              setColor(241, 7, 105);
               
               lcd.setCursor(1, 13);
               lcd.write(cm);
        
        
  }
    else if( cm <= 10)
          {
             lcd.setRGB(r, g, b);
             setColor(255, 255, 0);

             lcd.setCursor(1, 13);
             lcd.write(cm);
          }

          else if ( cm <= 15)
                {
                  lcd.setRGB(r, g, b);
                  setColor(0, 255, 213);

                  lcd.setCursor(1, 13);
                  lcd.write(cm);
                }
                
              else if ( cm > 15 )
                   {
                       lcd.setRGB(r, g, b);
                       setColor(255, 115, 0)

                       lcd.setCursor(1, 13);
                       lcd.write(cm);
        
                    }

  }
