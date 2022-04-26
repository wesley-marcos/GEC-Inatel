ISR(INT0_vect){
  
  PORTD ^= (1 << PD7); // Inverte PD7
  PORTD |= (1 << PD6); //Liga PD6
  _delay_ms(200); //Delay 200ms
  PORTD &= ~(1 << PD6); //Desliga PD6
}

int main (void) {
  
  DDRD |= (1 << PD7) | (1 << PD6); // Configura saida
  PORTD |= (1 << PD2); // Habilita resistor interno
  
  EICRA |= (1 << ISC01); // Configura interrupcao por transicao de descida
  //EICRA |= (1 << ISC01)|(0 << ISC00); // Configura interrupcao por transicao de descida
  EIMSK |= (1 << INT0); // Configura uso do INT0
  sei(); // Habilita bit de interrupcao global

  while(1){
    PORTD |= (1 << PD7); //Liga PD7
    _delay_ms(2000); //Espera 2s
    PORTD &= ~(1 << PD7); //Desliga PD7
    _delay_ms(2000); //Espera 2s

    
  }
}
