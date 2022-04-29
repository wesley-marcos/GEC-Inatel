void setup() {
  //Configurando os pinos PD1, PD2 e PD3 como saídas
  DDRD = 0b00001110;

  //Configurando os pinos PB1, PB2 e PB3 como saídas
  DDRB = 0b00001110;

}

void loop() {

  //Ligando os pinos PB1, PB2 e PB3
  PORTB = 0b00001110;

}
