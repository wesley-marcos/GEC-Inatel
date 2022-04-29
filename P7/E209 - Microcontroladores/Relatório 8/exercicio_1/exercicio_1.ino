#define Lvermelho PB0
#define Lverde PB1
int cont0 = 0;
ISR(TIMER0_COMPA_vect)
{
    cont0++;
    if (cont0 >= 78)
    {
        PORTB ^= (1 << PB0); //Inverte o led
        cont0 = 0;
    }
}

int main(void)
{
    TCCR0A |= (1 << WGM01);              //Modo CTC
    TCCR0B |= (1 << CS02) | (1 << CS00); //Escolhe o Prescaler 1024
    OCR0A = 150;                         //LIMITE DA CONTAGEM
    TIMSK0 |= (1 << OCIE0A);             //Habilita a interrupcao no comparador A
  
    sei(); //Habilita o bit de interrupcao global
    DDRB |= (1 << PB0)|(1 << PB1);
    PORTB &= ~(1 << PB0)&~(1 << PB1); //Desliga led no Lvermelho
    while (1); //super loop
}
