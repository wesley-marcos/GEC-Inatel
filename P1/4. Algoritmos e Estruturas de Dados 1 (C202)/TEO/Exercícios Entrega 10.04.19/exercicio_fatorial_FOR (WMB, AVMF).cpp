//Escreva um programa para calcular o fatorial de um valor N fornecido, usando a estrutura de repetição FOR. OBS: N deve ser um valor inteiro e >=0.

#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	//Declaração de Variáveis.
	int N, i = 2, fat = 1;

	//Estrutura de Repetição para validação de 'N' (N >= 0).
	do
	{
		cout << "Digite o numero que deseja saber o fatorial:" << endl;
		cin >> N;

	}
	while(N < 0);

	//Estrutura de Repetição (FOR) para calculo do fatorial.
	for(i = 2; i <= N; i++)
	{
		fat = fat * i;
	}

	//Saída de Dados.
	cout << fat << endl;

	return 0;
}//Fim do Código
