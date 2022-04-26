//LED vermelho no Pino 3
#define led_vermelho_on PORTD |= 0b00001000 
#define led_vermelho_off PORTD &= ~0b00001000 

//LED verde no Pino 2
#define led_verde_on PORTD |= 0b00000100 
#define led_verde_off PORTD &= ~0b00000100 

//LED amarelo no Pino 1
#define led_amarelo_on PORTD |= 0b00000010
#define led_amarelo_off PORTD &= ~0b00000010 

#define ATENCAO 1
#define PARADO 0 
#define AVANCAR 2

char estado_atual = PARADO;
char seguir = AVANCAR;
char atencao = ATENCAO;

int main(void){
  DDRD |= 0b00001110; //Config pinos 1, 2 e 3 como saida
  
  //Piscando todos os LEDs
  PORTD = 0b00001110;
  _delay_ms(500);
  PORTD = 0b00000000;
  _delay_ms(500);

  //Loop Infinito
  for(;;){

    switch(estado_atual)
    {
      case AVANCAR:
         led_verde_on;
         led_amarelo_off;
         led_vermelho_off;
         _delay_ms(12000);
         estado_atual = ATENCAO;
         break;
      case ATENCAO:
         led_verde_off;
         led_amarelo_on;
         led_vermelho_off; 
         _delay_ms(3000);
         estado_atual = PARADO;
         break;
      case PARADO:
         led_verde_off;
         led_amarelo_off;
         led_vermelho_on; 
         _delay_ms(15000);
         estado_atual = AVANCAR;
         break;
       default:
         break;   
    }
    
  }
}
