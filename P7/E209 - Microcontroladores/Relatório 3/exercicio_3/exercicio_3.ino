void setup() {
  //Configurando os pinos PB1 e PB2 como saídas
  DDRB = 0b00000110;

}

void loop() {
  //Sequência 01
  PORTB = 0b00000010;
  _delay_ms(250);

  //Sequência 10
  PORTB = 0b00000100;
  _delay_ms(250);

}
