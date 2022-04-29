#define SAIDAS 0b0001110 //Máscara para as saídas (PD1, PD2 e PD3)
#define BOT 0b00010000 // Botão conectado ao PD4
#define MA 0b00000010 //Led conectado ao PD1 (Motor Abrindo)
#define MF 0b00000100 //Led conectado ao PD2 (Motor Fechando)
#define MP 0b00001000 //Led conectado ao PD3 (Motor Parado)

#define SA 0b00100000 // Sensor totalmente aberto, conectado ao(PD5)
#define SF 0b01000000 // Sensor totalmente fechado, conectado ao(PD6)

#define FECHADO 0 //Portão fechado
#define ABRINDO 1 //Portão abrindo
#define ABERTO 2 //Portão aberto
#define P_ABRINDO 3 //Portão parcialmente fechado
#define FECHANDO 4 //Portão fechando
#define P_FECHANDO 5 //Portão parcialmente fechado

int main(void){
  
  DDRD |= SAIDAS;//Ativando as saídas
  PORTD |= BOT; //Ativando Pull up no botão (PD4)
  
  int estado = FECHADO; //Portão começa fechado
  
  while(1){
    
    switch(estado){

      //Quando o portão estiver FECHADO
      case FECHADO:
      
        PORTD  &= ~(SAIDAS); // Desligados os 2 motores
        
        if (!(PIND & BOT)) // Verifica se o botão foi pressionado
        {
          _delay_ms(1000); //Delay de 1s
          estado = ABRINDO; //"estado" setado como ABRINDO
        }
        
        break;

      //Quando o portão estiver ABRINDO
      case ABRINDO:
      
        PORTD |= MA; // Liguei o motor abrindo
        PORTD &= ~(MF); // Desliguei o motor fechando
        
        if (PIND & SA) // Verifica o sensor totalmento aberto
          estado = ABERTO; //"estado" setado como ABERTO 
      
        else if (!(PIND & BOT)) // Verifica o botão
        {
          _delay_ms(1000); //delay 1s
          estado = P_ABRINDO; //"estado" setado como PARCIALMENTE ABERTO
        }
        break;

      //Quando o portão estiver ABERTO
      case ABERTO:
        PORTD &= ~(SAIDAS); // Desliguei os 2 motores
        if (!(PIND & BOT)) // Verifica o botão
        {
          _delay_ms(1000); //delay 1s
          estado = FECHANDO; //"estado" setado como FECHANDO
        }
        break;

      //Quando o portão estiver PARCIALMENTE ABERTO
      case P_ABRINDO:
      
        PORTD &= ~(SAIDAS); // Desligado os 2 motores
        
        if (!(PIND & BOT)) // Verifica o botão
        {
          PORTD |= MP; //Motor parado ligado
          _delay_ms(1000); //delay 1s
          PORTD &= ~(MP); //Motor parado desligado
          estado = FECHANDO; //"estado" setado como FECHANDO
        }
        break;

      //Quando o portão estiver FECHANDO
      case FECHANDO:
        PORTD |= MF; //Motor fechando ligado
        PORTD &= ~(MA); //Motor abrindo desligado
        if (PIND & SF) //Verifica o sensor totalmente fechado
          estado = FECHADO; //"estado" setado como FECHADO
 
        else if (!(PIND & BOT)) //Verifica o botão
        {
          _delay_ms(1000); //delay 1s
          estado = P_FECHANDO; //"estado" setado como PARCIALMENTE FECHADO
        }
        break;

      //Quando o portão estiver PARCIALMENTE FECHADO
      case P_FECHANDO:
        PORTD &= ~(SAIDAS); //Desligado os 2 motores
        if (!(PIND & BOT)) //Verifica o botão
        {
          PORTD |= MP; //Motor parado ligado
          _delay_ms(1000); //delay 1s
          PORTD &= ~(MP); //Motor parado desligado
          estado = ABRINDO; //"estado" setado como ABRINDO
        }
        break;
 
      default:
        break;
    }
  } 
}
