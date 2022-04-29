#include <rgb_lcd.h>
#include <Ultrasonic.h>

#define TRIGGER_PIN 4
#define ECHO_PIN 5

Ultrasonic ultrasonic(TRIGGER_PIN, ECHO_PIN);
rgb_lcd lcd;

void setup()
  {
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.clear();
  
  }

void loop()
  {
  float cmMsec, inMsec;
  long microsec = ultrasonic.timing();

  cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);
 
  Serial.print(", CM: ");
  Serial.println(cmMsec);
  Serial.print("=========================");
  lcd.clear();

  if(cmMsec>0 && cmMsec<=5){ //MAGENTA
  lcd.setRGB(255, 0, 255);
  }
  
  else if(cmMsec>5.0 && cmMsec<=10.0){ //AMARELO
  lcd.setRGB(255, 255, 0);
  }
 
  else if(cmMsec>10.0 && cmMsec<=15.0){ //CIANO
  lcd.setRGB(0, 255, 255);
  }
  else if(cmMsec>15.0){ //LARANJA
  lcd.setRGB(255, 165, 0);
  }

  lcd.setCursor(0, 1);
  lcd.print("Dist: ");
  lcd.setCursor(7, 1);
  lcd.print(cmMsec);
    
  delay(250);
  }
