//Definindo as entradas:
#define BOTAO 0b00010000 //Define o botão no pino PD4
#define PARADA_CARDIACA 0b00000100 //Define o botão de 'Parada Cardíaca' no pino PD2 (INT0)
#define PARADA_RESPIRATORIA 0b00001000 //Define o botão de 'Parada Respiratória' no pino PD3 (INT1)
#define PRESSAO_BAIXA 0b00000001 //Define o botão de 'Pressão Baixa' no pino PB0 
#define PRESSAO_ALTA 0b00000010 //Define o botão de 'Pressão Alta' no pino PB1

//Definindo os leds (saídas):
#define LED_VERMELHO (1 << PD6) //Define o alerta vermelho (maior prioridade) no pino PD6 
#define LED_AMARELO (1 << PD7) //Define o alerta amarelo (média prioridade) no pino PD7
#define LED_VERDE (1 << PD5) //Define a saída do alerta verde (sem prioridade) no pino PD5 (PWM)

//Definindo os padrões de intensidade do led verde:
int brilho_baixo = 127;
int brilho_alto = 255;

//Alerta vermelho - Parada Cardíaca (Prioridade Máxima)
ISR(INT0_vect){
    PORTD |= LED_VERMELHO;
    _delay_ms(500);

    //Botão pressionado = pisca todos os leds 2 vezes
    if(!(PIND & BOTAO)){
      PORTD |= LED_VERMELHO | LED_AMARELO | LED_VERDE;
      _delay_ms(500);
      PORTD &= ~(LED_VERMELHO | LED_AMARELO | LED_VERDE);
      _delay_ms(500);
      PORTD |= LED_VERMELHO | LED_AMARELO | LED_VERDE;
      _delay_ms(500);
      PORTD &= ~(LED_VERMELHO | LED_AMARELO | LED_VERDE);
      _delay_ms(500);
    }
}

//Alerta amarelo - Parada Respiratória (Prioridade Média)
ISR(INT1_vect){
    PORTD |= LED_AMARELO;
    _delay_ms(500);
}
void setup(){
  DDRD |= PARADA_CARDIACA | PARADA_RESPIRATORIA | LED_VERMELHO | LED_AMARELO | LED_VERDE; //Configura todas as saídas
  DDRB |=  PRESSAO_BAIXA | PRESSAO_ALTA;
  PORTD &= PARADA_CARDIACA | PARADA_RESPIRATORIA| LED_VERMELHO | LED_AMARELO | LED_VERDE; //Todas as saídas começam desligadas
  PORTD |= BOTAO; //Definindo o pull-up do botão ativado
  // Configura modo FAST PWM e modo do comparador A:
  TCCR0A |= (1 << WGM01) | (1 << WGM00) | (1 << COM0A1);
  TCCR0B = (1 << CS00); //Seleciona opção para frequência (sem prescaler)
  OCR0A = 0; //Definindo o OCR0A como 0
  EICRA |= (1 << ISC01); // Configura interrupcao por transição de subida e descida
  EIMSK |= (1 << INT0) | (1 << INT1); // Configura uso do INT0
  sei(); // Habilita bit de interrupcao global
}

void loop(){

  //Alerta verde (pressão baixa) for acionado
  if(PINB & PRESSAO_BAIXA){

    PORTD |= LED_VERDE;
    _delay_ms(200);
    OCR0A = brilho_baixo;
    _delay_ms(500);
  }

  //Alerta verde (pressão alta) for acionado
  if(PINB & PRESSAO_ALTA){

    PORTD |= LED_VERDE;
    _delay_ms(200);
    OCR0A = brilho_alto ;
    _delay_ms(500);
  }

}
