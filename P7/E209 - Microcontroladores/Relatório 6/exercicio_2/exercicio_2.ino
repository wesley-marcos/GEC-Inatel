ISR(INT0_vect){
  
  PORTD |= (1 << PD7); // Liga PD7
  _delay_ms(500);
  PORTD &= ~(1 << PD7); // Desliga PD7
}

ISR(INT1_vect){

  EIMSK ^= (1 << INT0); // Configura uso do INT1
  
}

int main() {
  
  DDRD |= (1 << PD7) | (1 << PD6); // Configura saida
  PORTD |= (1 << PD2) | (1 << PD3); // Habilita resistor interno
  EICRA |= (1 << ISC01); // Configura interrupcao por transicao de descida/subida
  EICRA |= (1 << ISC11); // Configura interrupcao por transicao de descida
  EIMSK |= (1 << INT1); // Configura uso do INT0
  sei(); // Habilita bit de interrupcao global

  while(1){
    PORTD ^= (1 << PD6); //Inverte PD6
    _delay_ms(600); //Espera 600ms
  }
}
