/**
 * @author  Wesley Marcos Borges, GEC - 1651 e Pedro G. G. R. Balestra, GEC - 1551
 * @date    14 Jun 2022
 * 
*/

#include <stdio.h>
#include <stdlib.h>

// Definição das variáveis básicas
#define led_amarelo (1 << PD6) // Led que representará o motor
#define botao_potencia (1 << PD2) // Botão responsável por mostrar na tela qual a porcentagem da potência
#define botao_emergencia (1 << PD3) // Botão responsável por desligar totalmente o funcionamento do motor
#define FOSC 16000000U // Clock Speed
#define BAUD 9600 // velocidade de comunicao
#define MYUBRR FOSC / 16 / BAUD - 1

char msg_tx[20]; // Variável para varrer uma mensagem de transmissao
char msg_rx[32]; // Variável para varrer uma mensagem de recepção
int pos_msg_rx = 0; // Posicionamento na hora de mostrar a mensagem
int tamanho_msg_rx = 1; // Tamanho da mensagem que será passada para o receptor
unsigned int x = 0, valor = 0; // Variáveis responsaveis por manipulação do led
float tensao = 0.0; // Porcentagem do motor
bool verdade = false; // Variável usada para controle de entrada da opção 'R' de transmissão

// Protótipos das funções
void UART_Init(unsigned int ubrr);
void UART_Transmit(char *dados);

// Interrupção da UART  
ISR(USART_RX_vect)
{
  // Escreve o valor recebido pela UART na posição pos_msg_rx do buffer msg_rx
  msg_rx[pos_msg_rx] = UDR0;
  if (pos_msg_rx == tamanho_msg_rx)
    pos_msg_rx = 0;
}

// Função que fará a transmissão de dados
void UART_Transmit(char *dados)
{
  // Envia todos os caracteres do buffer dados ate chegar um final de linha
  while (*dados != 0)
  {
    while (!(UCSR0A & (1 << UDRE0))); // Aguarda a transmissão acabar
    
    // Escreve o caractere no registro de tranmissão
    UDR0 = *dados;
    
    // Passa para o próximo caractere do buffer dados
    dados++;
  }
}

// Função de inicialização da UART
void UART_Init(unsigned int ubrr)
{
  // Configura a baud rate
  UBRR0H = (unsigned char)(ubrr >> 8);
  UBRR0L = (unsigned char)ubrr;
  
  // Habilita a recepcao, tranmissao e interrupcao na recepcao
  UCSR0B = (1 << RXEN0) | (1 << TXEN0) | (1 << RXCIE0);
  
  // Configura o formato da mensagem: 8 bits de dados e 1 bits de stop
  UCSR0C = (1 << UCSZ01) | (1 << UCSZ00);
}

// Função para configuração do ADC
void ADC_init ()
{
  // Configura Vref para VCC = 5V
  ADMUX |= (1 << REFS0);
  ADCSRA |= (1 << ADEN) | (1 << ADPS2) | (1 << ADPS1) | (1 << ADPS0);
}

// Função de leitura do pino do ADC
int ADC_read (unsigned char pino)
{
  // Seleciona o pino de entrada
  ADMUX |= (pino & 0b00000111);
  // Fazendo a conversão de leitura para mV
  int valor = 0;
  int valor_aux;
  // Realiza 8 leituras
  for (unsigned char i = 0; i < 8; i++)
  {
    // Inicia a conversão
    ADCSRA |= (1 << ADSC);
    // Aguarda o fim da conversão
    while (!ADCSRA & (1 << ADIF));
    // Pega o valor da conversão
    valor_aux = ADCL;
    valor_aux += ADCH << 8;
    // Soma o valor da amostra
    valor += valor_aux;
  }
  // Retorna a média de 8 leituras
  return valor >> 3;
}

//Interrupção do botão que mostrará a porcentagem (INT0)
ISR(INT0_vect)
{
  UART_Transmit("\nPotencia: ");
  itoa(tensao, msg_tx, 10);
  UART_Transmit(msg_tx);
  UART_Transmit("% \n");
  OCR0A = tensao;
  
  // Aguarda 100ms
  _delay_ms(100);
}

//Interrupção do botão de emergência (INT1)
ISR(INT1_vect)
{
  EIMSK &= ~(1 << INT0);
  PORTD &= ~led_amarelo;
  UART_Transmit("\nSISTEMA PARADO!!\n");
  OCR0A = 0;
  UART_Transmit("\nPotencia: 0%\n");
  verdade = true;
  
  UART_Transmit("\nDigite 'R' para Religar o sistema:\n");
  x = 0;
  
}

// Função Void Setup
void setup()
{
  // Inicializando a comunicação serial
  UART_Init(MYUBRR); 
  x = 0;
  
  // Configura o interrupção
  EICRA = 0b00001010; //configurado como transição de descida para ambos os botões
  EIMSK = 0b00000011; //Habilitando a interrupção em INT0 e INT1
  
  // Habilita o interruptor global
  sei(); 
  
  //Configurando o GPIO
  DDRD |= (1 << PD6); // Definindo PD6 como saida (led amarelo)
  PORTD |= (1 << PD3) | (1 << PD2); // Definindo PD3 e PD2 como resistores de pull-up
   
  // Inicializa o ADC
  ADC_init ();
  
  // Configura modo FAST PWM e modo do comparador A
  TCCR0A |= (1 << WGM01) | (1 << WGM00) | (1 << COM0A1);
  TCCR0B = 1; // Seleciona opção para frequência
  OCR0A = 0; //Definindo o OCR0A como 0
  
  // Mensagem para ligar o sistema
  UART_Transmit("Pressione 'L' para ligar o sistema!!\n");
  x = 0;
  while (x == 0) {
    if (msg_rx[0] == 'L' | msg_rx[0] == 'l') {
      x = 1;
    }
  }
}

// Super-loop
void loop ()
{
  // Leitura do pino pwm para passar o parâmetro de referência
  int valor = ADC_read(PC0); 

  // Conversão da potência do pwm para porcentagem
  tensao = valor * (100. / 1023.); 
  
  // Desliga o sistema
  if (msg_rx[0] == 'D' | msg_rx[0] == 'd')
  {
    x = 1;
    PORTD &= ~led_amarelo; // Desliga o led
    OCR0A = 0; // Coloca a potência do led em 0%
  }
  // Liga o Sistema
  if (msg_rx[0] == 'L' | msg_rx[0] == 'l')
  {
    x = 1;
    PORTD |= led_amarelo; // Liga o led
    OCR0A = tensao; // Coloca a potência do led igual à variável tensão
  }

  // Reiniciando o sistema
  while (verdade) {

    if (msg_rx[0] == 'R' | msg_rx[0] == 'r')
    {
      UART_Transmit("\nSistema Religado!!\n");
      x = 1;
      EIMSK |= (1 << INT0); // Habilita o INT0
      verdade = false;
      msg_rx[0] = 0;
    }
  }
}
