//Defini sinônimos para facilitar a programação
#define led 4

//Função de Inicialização (apenas uma vez, quando o arduino é iniciado
void setup() {

  pinMode (led, OUTPUT); //defini o led como saída digital

  digitalWrite (led, LOW); //usado para iniciar o led apagado

}

//Função de Repetição (usada repetidamente até o arduino ser desligado)
void loop() {

  digitalWrite (led, HIGH); //liga o led

  delay (1000); //aguarda 1 segundo

  digitalWrite (led, LOW); //desliga o led

  delay (1000); //aguarda 1 segundo
 

} //no final do código, o arduino repete a função loop até ser desligado
