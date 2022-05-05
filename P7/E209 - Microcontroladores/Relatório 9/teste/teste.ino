#define pwm_out (1 << PD6) //Define a saída do PWM no pino PD6
int brightness = 0;

int main()
{
  DDRD |= pwm_out; // configura saída para o PWM
  PORTD &= ~pwm_out; // PWM inicia desligado
  
  // Configura modo FAST PWM e modo do comparador A
  TCCR0A |= (1 << WGM01) | (1 << WGM00) | (1 << COM0A1);
  TCCR0B = 1; // Seleciona opção para frequência
  OCR0A = 0;
  
  while (1){
    OCR0A = brightness;
    brightness += 30;
    if (brightness > 255)
      brightness = 0;
      _delay_ms(100);
  }
}
