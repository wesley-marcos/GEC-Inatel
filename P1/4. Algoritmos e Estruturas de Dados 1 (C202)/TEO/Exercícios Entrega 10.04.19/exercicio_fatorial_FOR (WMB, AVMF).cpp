//Escreva um programa para calcular o fatorial de um valor N fornecido, usando a estrutura de repeti��o FOR. OBS: N deve ser um valor inteiro e >=0.

#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	//Declara��o de Vari�veis.
	int N, i = 2, fat = 1;

	//Estrutura de Repeti��o para valida��o de 'N' (N >= 0).
	do
	{
		cout << "Digite o numero que deseja saber o fatorial:" << endl;
		cin >> N;

	}
	while(N < 0);

	//Estrutura de Repeti��o (FOR) para calculo do fatorial.
	for(i = 2; i <= N; i++)
	{
		fat = fat * i;
	}

	//Sa�da de Dados.
	cout << fat << endl;

	return 0;
}//Fim do C�digo
