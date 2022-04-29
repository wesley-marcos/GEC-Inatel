#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>

using namespace std;

int main ()
{setlocale(LC_ALL, "Portuguese"); //Para habilitarmos a língua portuguesa
										
	//Declaração de Variáveis.
	int N, sexo, CH = 0, CM = 0;
	float alt, soma = 0, media;

	//Verificador de Número de Pessoas.
	do
	{

		cout << "Digite o número de pessoas: " << endl;
		cin >> N;
	}
	while (N <= 0);

	//Comando de Repetição.
	for (int i = 0; i < N; i++)
	{

		do
		{

			cout << "Digite seu sexo (1 para masculino e 2 para feminino): " << endl;
			cin >> sexo;

		}
		while (sexo != 1 && sexo != 2);


		do
		{

			cout << "Digite a sua altura: " << endl;
			cin >> alt;
		}
		while (alt <= 0);


		if (sexo == 1)
		{

			CH++;
		}
		else
		{
			CM++;
		}

		soma = soma + alt;
	}

	//Operação Matemática.
	media = soma / N;

	//Saídas de Dados.
	cout << fixed << setprecision (2);
	cout << "O número de homens é " << CH << endl;
	cout << "O número de mulheres é " << CM << endl;
	cout << "A média de altura desse grupo é " << media;

	return 0;
}//Fim do Código.
