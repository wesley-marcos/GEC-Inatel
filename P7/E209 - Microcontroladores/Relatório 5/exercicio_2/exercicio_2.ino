int main(){

  DDRB = 0b00001110; //Definindo PB1(led vermelho), PB2(led amarelo) e PB3(led verde) como saídas
  PORTB &= ~((1 << PB1) & (1 << PB2) & (1 << PB3)); //Definindo PB1, PB2 e PB3 começando desligados
  PORTD = 0b00001110; //Definindo PD1, PD2 e PD3 com pull-up ativo
  int P_total = 0; //Usado para definir o limite máximo de HP usado no sistema
  bool m1 = false; //Variável auxiliar usada para verificar se o botão 1 foi apertado
  bool m2 = false; //Variável auxiliar usada para verificar se o botão 2 foi apertado
  bool m3 = false; //Variável auxiliar usada para verificar se o botão 3 foi apertado
  bool ok = false; //Variável auxiliar usada para garantir que o botão 1 será desligado primeiro

  while(1){

    //Verifica se o botão 1 foi apertado
    if((PIND & (1 << PD1)) == 0){
      
      if(m1){
        
        PORTB &= ~(1 << PB1);
        _delay_ms(200);
        P_total -= 30;
        m1 = false;
      }

      else{
        PORTB |= (1 << PB1);
        _delay_ms(200);
        P_total += 30;
        m1 = true;
      }
    }

    //Verifica se o botão 2 foi apertado
    if((PIND & (1 << PD2)) == 0){

      if(m2){
        
        PORTB &= ~(1 << PB2);
        _delay_ms(200);
        P_total -= 50;
        m2 = false;
      } 

       else{
        PORTB |= (1 << PB2);
        _delay_ms(200);
        P_total += 50;
        m2 = true;
         ok = true;
      }
    }

    //Verifica se o botão 3 foi apertado
    if((PIND & (1 << PD3)) == 0){
      if(m3){
        
        PORTB &= ~(1 << PB3);
        _delay_ms(200);
        P_total -= 70;
        m3 = false;
      }  

      else{
        PORTB |= (1 << PB3);
        _delay_ms(200);
        P_total += 70;
        m3 = true;
      }   
    }

    //Verifica se o botão 1 foi apertado
    if(P_total > 90 && ok == false){
      
      PORTB &= ~(1 << PB1);
      P_total -= 30;
      m1 = false;
      ok = true;
      _delay_ms(200);
   }

   //Verifica se o led 1 foi desligado. Se sim, desliga o led 2
   if(P_total > 90 && ok == true){
      
      PORTB &= ~(1 << PB2);
      P_total -= 50;
      _delay_ms(200);
      m2 = false;
      ok = false;
    }
  } 
}
