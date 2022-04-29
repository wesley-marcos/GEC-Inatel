#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main ()
{
	//Declaração de Variáveis.
	double soma = 0, tsoma = 0;
	int x, i;

	//Entrada de Dados.
	cin >> x;
	
	//Estrutura de Repetição.
	for (i = 0; i < x; i++)
	{

		soma = (((x - i) * pow(x, i + 1)) / (i + 1)); //Operação Matemática.

		//Estrutura de Decisão (Se for par).
		if(i % 2 == 0)
		{
			tsoma = (soma * -1) + tsoma;
		}
		if(i % 2 != 0) //Estrutura de Decisão (Se for Impar).
		{
			tsoma = (soma * 1) + tsoma;
		}
	}

	//Saída de Dados.
	cout << fixed << setprecision(3) << endl;
	cout << "Soma = " << tsoma << endl;

	return 0;
}
