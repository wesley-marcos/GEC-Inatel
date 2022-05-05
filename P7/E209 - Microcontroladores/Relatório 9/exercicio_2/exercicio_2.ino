#define pwm_out (1 << PD6) //Define a saída do PWM no pino PD6
#define botao (1 << PD2) //Define a saída do botão no pino PD5
int brightness = 0;

ISR(INT0_vect){
    brightness += 30;

    if(brightness > 255){
      brightness = 0;
    }
}

int main()
{
  DDRD |= pwm_out; // configura saída para o PWM
  DDRD &= ~(1 << PD2); // configura PD2 (botão) como entrada
  PORTD |= (1 << PD2); //configura o pull-up do botão
  PORTD &= ~pwm_out; // PWM inicia desligado
  
  // Configura modo FAST PWM e modo do comparador A
  TCCR0A |= (1 << WGM01) | (1 << WGM00) | (1 << COM0A1);
  TCCR0B = 1; // Seleciona opção para frequência
  OCR0A = 0; //Definindo o OCR0A como 0
  EICRA |= (1 << ISC01); // Configura interrupcao por transicao de descida e subida (gerando interrupção)
  EIMSK |= (1 << INT0); // Configura uso do INT0
  sei(); // Habilita bit de interrupcao global
  
  while (1){
      OCR0A = brightness;
  }
}
