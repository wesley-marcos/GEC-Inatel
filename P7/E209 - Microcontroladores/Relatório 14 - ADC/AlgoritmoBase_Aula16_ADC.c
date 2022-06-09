/**
 * @file    AlgoritmoBase_Aula15_ADC.c
 * @author  Diego Anestor Coutinho
 * @date    Mai 2022
 *
 * O algoritmo é uma possível resolução para o(s) exercício(s) do relatório 11.
 * EM CASO DE DÚVIDA PROCURE POR UM MONITOR, FAREMOS O MELHOR PARA LHE AJUDAR.
*/

// Fun��o para configura��o do ADC
void ADC_init () {

    // Configura Vref para VCC = 5V
    ADMUX |= (1 << REFS0);

    

    ADCSRA |= (1 << ADEN) | (1 << ADPS2) | (1 << ADPS1) | (1 << ADPS0);
}

// Fun��o para leitura do pino do ADC
int ADC_read (unsigned char pino) {

    // Seleciona o pino de entrada
    ADMUX |= (pino & 0b00000111);

    // Pega a m�dia das amostras
    int valor = 0;
    int valor_aux;

    // Realiza 8 leituras
    for (unsigned char i = 0; i < 8; i++) {

        // Inicia a converss�o
        ADCSRA |= (1 << ADSC);

        // Aguarda o fim da converss�o
        while (!ADCSRA & (1 << ADIF));

        // Pega o valor da converss�o
        valor_aux = ADCL;
        valor_aux += ADCH << 8;

        // Soma o valor da amostra
        valor += valor_aux;
    }

    // Retorna a média de 8 leituras
    return valor >> 3;
}


// Fun��o principal, execu��o de exemplo usando Serial Monitor
int main () {

    // Inicializa o ADC
    ADC_init ();

    // Inicializa a porta serial
    Serial.begin (9600);

    // Loop infinito
    while (1) {

        // Leitura do pino ADC0
        int valor = ADC_read (PC0);

        // Imprime o valor
        Serial.print ("ADC: ");
        Serial.println (valor);

        // Aguarda 500ms
        _delay_ms(500);
    }
}