/**
 * @file    AlgoritmoBase_Aula15_ADC.c
 * @author  Diego Anestor Coutinho
 * @date    Mai 2022
 *
 * O algoritmo Ã© uma possÃ­vel resoluÃ§Ã£o para o(s) exercÃ­cio(s) do relatÃ³rio 11.
 * EM CASO DE DÃšVIDA PROCURE POR UM MONITOR, FAREMOS O MELHOR PARA LHE AJUDAR.
*/

// Função para configuração do ADC
void ADC_init () {

    // Configura Vref para VCC = 5V
    ADMUX |= (1 << REFS0);

    

    ADCSRA |= (1 << ADEN) | (1 << ADPS2) | (1 << ADPS1) | (1 << ADPS0);
}

// Função para leitura do pino do ADC
int ADC_read (unsigned char pino) {

    // Seleciona o pino de entrada
    ADMUX |= (pino & 0b00000111);

    // Pega a média das amostras
    int valor = 0;
    int valor_aux;

    // Realiza 8 leituras
    for (unsigned char i = 0; i < 8; i++) {

        // Inicia a converssão
        ADCSRA |= (1 << ADSC);

        // Aguarda o fim da converssão
        while (!ADCSRA & (1 << ADIF));

        // Pega o valor da converssão
        valor_aux = ADCL;
        valor_aux += ADCH << 8;

        // Soma o valor da amostra
        valor += valor_aux;
    }

    // Retorna a mÃ©dia de 8 leituras
    return valor >> 3;
}


// Função principal, execução de exemplo usando Serial Monitor
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