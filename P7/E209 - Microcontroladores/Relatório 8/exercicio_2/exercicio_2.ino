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
int cont1 = 0;
ISR(TIMER2_COMPA_vect)
{
    cont1++;
    if (cont1 >= 4687)
    {
        PORTB ^= (1 << PB1); //Inverte o led
        cont1 = 0;
    }
}
int main(void)
{
    TCCR0A |= (1 << WGM01);              //Modo CTC
    TCCR0B |= (1 << CS02) | (1 << CS00); //Escolhe o Prescaler 1024
    OCR0A = 100;                         //LIMITE DA CONTAGEM
    TIMSK0 |= (1 << OCIE0A);             //Habilita a interrupcao no comparador A
  
    TCCR2A |= (1 << WGM21);              //Modo CTC
    TCCR2B |= (1 << CS22) | (1 << CS20); //Escolhe o Prescaler 1024
    OCR2A = 200;                         //LIMITE DA CONTAGEM
    TIMSK2 |= (1 << OCIE2A);             //Habilita a interrupcao no comparador A
  
    sei(); //Habilita o bit de interrupcao global
    DDRB |= (1 << PB0)|(1 << PB1);
    PORTB |= 00000000; //Liga led no Lvermelho
    while (1); //super loop
}
