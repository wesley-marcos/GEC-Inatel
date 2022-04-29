void setup() {
  //Configurando os pinos PB1 e PB2 como saídas
  DDRB = 0b00000110;

}

void loop() {
  //Sequência 00
  PORTB = 0b00000000;
  _delay_ms(500);

  
  //Sequência 01
  PORTB = 0b00000010;
  _delay_ms(500);

  
  //Sequência 10
  PORTB = 0b00000010;
  _delay_ms(500);

  
  //Sequência 11
  PORTB = 0b00000110;
  _delay_ms(500);
}
