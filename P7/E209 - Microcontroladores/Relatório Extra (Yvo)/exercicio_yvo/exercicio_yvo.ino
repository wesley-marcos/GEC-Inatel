//Definindo as entradas:
#define BOTAO (1 << PD2) //Define o botão no pino PD2
#define PARADA_CARDIACA 0b00000001 //Define o botão de 'Parada Cardíaca' no pino PB0
#define PARADA_RESPIRATORIA 0b00010000 //Define o botão de 'Parada Respiratória' no pino PB4
#define PRESSAO_BAIXA 0b00000100 //Define o botão de 'Pressão Baixa' no pino PB2 
#define PRESSAO_ALTA 0b00001000 //Define o botão de 'Pressão Alta' no pino PB3

//Definindo os leds (saídas):
#define LED_VERMELHO (1 << PD5) //Define o alerta vermelho (maior prioridade) no pino PD5 
#define LED_AMARELO (1 << PD4) //Define o alerta amarelo (média prioridade) no pino PD4
#define LED_VERDE (1 << PD6) //Define a saída do alerta verde (sem prioridade) no pino PD6 (PWM)

//Definindo os padrões de intensidade do led verde:
int brilho_baixo = 100;
int brilho_alto = 255;
int brightness = 0;

//Botão que chama a enfermeira
ISR(INT0_vect){
    PORTD |= LED_VERMELHO;
    OCR0A = brilho_alto;
    PORTD |= LED_AMARELO;
    _delay_ms(1000);
    OCR0A = 0;
    PORTD ^= LED_VERMELHO;
    PORTD ^= LED_AMARELO;
    _delay_ms(1000);
    PORTD |= LED_VERMELHO;
    OCR0A = brilho_alto;
    PORTD |= LED_AMARELO;
    _delay_ms(1000);
    PORTD ^= LED_VERMELHO;
    PORTD ^= LED_AMARELO;
}

void setup(){
  //Configura todas as saídas
  DDRD |= LED_VERMELHO | LED_AMARELO | LED_VERDE; 
  DDRB |= PARADA_CARDIACA | PARADA_RESPIRATORIA | PRESSAO_BAIXA | PRESSAO_ALTA;
  
  //Todas as saídas começam desligadas
  PORTD &= ~LED_VERMELHO;
  PORTD &= ~LED_AMARELO;
  PORTD &= ~LED_VERDE;

  //Todas as entradas com pull-up desativado
  PORTB &= ~PARADA_CARDIACA;      
  PORTB &= ~PARADA_RESPIRATORIA;
  PORTB &= ~PRESSAO_BAIXA;
  PORTB &= ~PRESSAO_ALTA;
   
  //Definindo o pull-up do botão ativado
  PORTD |= BOTAO; 
  
  // Configura modo FAST PWM e modo do comparador A:
  TCCR0A |= (1 << WGM01) | (1 << WGM00) | (1 << COM0A1);
  TCCR0B = (1 << CS02); //Seleciona opção para frequência (sem prescaler)

  //Configurando a interrupção
  EICRA |= (1 << ISC01); //Configura interrupcao por transição de subida e descida
  EIMSK |= (1 << INT0); // Configura uso do INT0
  sei(); // Habilita bit de interrupcao global
}

void loop(){

  OCR0A = brightness;
  
  bool alerta1 = (PINB & PARADA_CARDIACA) ;
  bool alerta2 = (PINB & PARADA_RESPIRATORIA);
  bool alerta3 = (PINB & PRESSAO_BAIXA);
  bool alerta4 = (PINB & PRESSAO_ALTA);

  //Alerta vermelho (parada cardíaca) for acionado
  if(alerta1 == true && alerta2 == false && alerta3 == false && alerta4 == false){

    PORTD |= LED_VERMELHO;
    PORTD &= ~LED_VERDE;
    PORTD &= ~LED_AMARELO;
    _delay_ms(1000);
    PORTD &= ~LED_VERMELHO;
  }

  //Alerta amarelo (parada respiratória) for acionado
  if(alerta1 == false && alerta2 == true && alerta3 == false && alerta4 == false){

    PORTD |= LED_AMARELO;
    PORTD &= ~LED_VERDE;
    PORTD &= ~LED_VERMELHO;
    _delay_ms(1000);
    PORTD &= ~LED_AMARELO;
  }
  
  //Alerta verde (pressão baixa) for acionado
  if(alerta1 == false && alerta2 == false && alerta3 == true && alerta4 == false){

    OCR0A = brilho_baixo;
    _delay_ms(1000);
  }

  //Alerta verde (pressão alta) for acionado
  if(alerta1 == false && alerta2 == false && alerta3 == false && alerta4 == true){

    OCR0A = brilho_alto ;
    _delay_ms(1000);
  }

}
