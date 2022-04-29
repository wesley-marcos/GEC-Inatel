#include <Ultrasonic.h>   //Carrega a biblioteca Ultrasonic  
#include <NewTone.h>    //Carrega a biblioteca Newtone  
   
//Dados do buzzer  
#define tempo 500   
int frequencia = 800;   
int Pinofalante = 4; 
    
int atraso = 1000;  
   
//Define o pino do Arduino a ser utilizado com o pino Trigger do sensor  
#define PINO_TRIGGER 13   
//Define o pino do Arduino a ser utilizado com o pino Echo do sensor  
#define PINO_ECHO   10   
   
//Inicializa o sensor ultrasonico  
Ultrasonic ultrasonic(PINO_TRIGGER, PINO_ECHO);   
   
void setup()  
{  
  pinMode(Pinofalante,OUTPUT); //Pino do buzzer   
  Serial.begin(9600); //Inicializa a serial  
}  
   
void loop()  
{  
  float cmMsec, inMsec;  
    
  //Le os dados do sensor, com o tempo de retorno do sinal  
  long microsec = ultrasonic.timing();   
   
  //Calcula a distancia em centimetros  
  cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);   
    
  //Ajusta o atraso de acordo com a distancia  
  if (cmMsec > 80)  
  {  
    atraso = 1500;  
  }  
  else if (cmMsec >50 && cmMsec<80)  
  {  
    atraso = 1000;  
  }  
  else if (cmMsec >30 && cmMsec<50)  
  {  
    atraso = 900;  
  }  
  else if (cmMsec > 10 && cmMsec < 30)  
  {  
    atraso = 700;  
  }  
  else if (cmMsec < 10)  
  {  
    atraso = 300;  
  }  
     
  //Apresenta os dados, em centimetros, na Serial  
  Serial.print("Distancia: ");  
  Serial.print(cmMsec);  
  Serial.print(" cm");
  Serial.println();
  //Serial.print(" atraso : ");  
  //Serial.println(atraso);  
  //Emite o bip  
  NewTone(Pinofalante, frequencia, tempo);   
   
  delay(atraso);  
} 
