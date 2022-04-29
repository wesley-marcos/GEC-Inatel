#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>

using namespace std;

int main ()
{setlocale(LC_ALL, "Portuguese"); //Para habilitarmos a l�ngua Portuguesa.
	
	//Declara��o de Vari�veis.
	int mat, cont = 0;
	double NP1, NP2, medialuno, somedia = 0;
	
	//Entrada de Dados.
	cout << "Digite o n�mero de sua matr�cula: " << endl;
	cin >> mat;
	
	//Verifica��o da matr�cula.
	while(mat != 0)
	{

		do
		{
			cout << "Digite sua nota na NP1: " << endl;
			cin >> NP1;

			cout << "Digite sua nota na NP2: " << endl;
			cin >> NP2;
		}
		while(NP1 < 0 && NP1 > 100 && NP2 < 0 && NP2 > 100);

		medialuno = (NP1 + NP2) / 2;

		cout << "A m�dia do aluno �:" << medialuno << endl;
		somedia = somedia + medialuno;
		cont++;

		cout << "Digite o n�mero de sua matr�cula: " << endl;
		cin >> mat;

	}
	
	//Sa�da de Dados.
	cout << fixed << setprecision (2);
	cout << "A m�dia da sala �: " << somedia / cont << endl;

	return 0;
}//Fim do C�digo.
