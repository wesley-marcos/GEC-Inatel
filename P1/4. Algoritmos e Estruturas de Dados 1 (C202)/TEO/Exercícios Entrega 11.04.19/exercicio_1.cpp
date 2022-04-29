#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>

using namespace std;

int main ()
{setlocale(LC_ALL, "Portuguese"); //Para habilitarmos a l�ngua portuguesa
										
	//Declara��o de Vari�veis.
	int N, sexo, CH = 0, CM = 0;
	float alt, soma = 0, media;

	//Verificador de N�mero de Pessoas.
	do
	{

		cout << "Digite o n�mero de pessoas: " << endl;
		cin >> N;
	}
	while (N <= 0);

	//Comando de Repeti��o.
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

	//Opera��o Matem�tica.
	media = soma / N;

	//Sa�das de Dados.
	cout << fixed << setprecision (2);
	cout << "O n�mero de homens � " << CH << endl;
	cout << "O n�mero de mulheres � " << CM << endl;
	cout << "A m�dia de altura desse grupo � " << media;

	return 0;
}//Fim do C�digo.
