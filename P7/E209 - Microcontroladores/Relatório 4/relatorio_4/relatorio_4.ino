int main(void)
{
   
  DDRD = DDRD | 0b10000000; // Pino PD7 definido como saída 
  PORTD = PORTD | 0b00010000; // Habilitar resistor de PULL-UP no PD4 
  PORTD = PORTD & ~(0b10000000); // Desliga a saída PD7; 
  
  DDRD = DDRD | 0b00001000; // Pino PD3 definido como saída
  PORTD = PORTD | 0b00000100; // Habilitar resistor de PULL-UP no PD2 
  PORTD = PORTD & ~(0b00000100); // Desliga a saída PD3;  
  
  for (;;) 
  { 
    if ((PIND & 0b00010000) == 0) // Botão pressionado ? 
    { 
      PORTD = PORTD | 0b10000000; // Aciona a saída 
      _delay_ms(500); 
      PORTD = PORTD & ~(0b10000000); // Desliga a saída
      _delay_ms(500); 
      PORTD = PORTD | 0b00001000; // Aciona a saída 
      _delay_ms(500); 
      PORTD = PORTD & ~(0b00001000); // Desliga a saída
    }
  } 
}
