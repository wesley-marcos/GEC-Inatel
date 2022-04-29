#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>

using namespace std;

int main ()
{setlocale(LC_ALL, "Portuguese"); //Para habilitarmos a língua Portuguesa.
	
	//Declaração de Variáveis.
	int mat, cont = 0;
	double NP1, NP2, medialuno, somedia = 0;
	
	//Entrada de Dados.
	cout << "Digite o número de sua matrícula: " << endl;
	cin >> mat;
	
	//Verificação da matrícula.
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

		cout << "A média do aluno é:" << medialuno << endl;
		somedia = somedia + medialuno;
		cont++;

		cout << "Digite o número de sua matrícula: " << endl;
		cin >> mat;

	}
	
	//Saída de Dados.
	cout << fixed << setprecision (2);
	cout << "A média da sala é: " << somedia / cont << endl;

	return 0;
}//Fim do Código.
