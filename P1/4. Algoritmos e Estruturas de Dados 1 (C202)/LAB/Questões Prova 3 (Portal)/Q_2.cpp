#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main ()
{
	//Declara��o de Vari�veis.
	double soma = 0, tsoma = 0;
	int x, i;

	//Entrada de Dados.
	cin >> x;
	
	//Estrutura de Repeti��o.
	for (i = 0; i < x; i++)
	{

		soma = (((x - i) * pow(x, i + 1)) / (i + 1)); //Opera��o Matem�tica.

		//Estrutura de Decis�o (Se for par).
		if(i % 2 == 0)
		{
			tsoma = (soma * -1) + tsoma;
		}
		if(i % 2 != 0) //Estrutura de Decis�o (Se for Impar).
		{
			tsoma = (soma * 1) + tsoma;
		}
	}

	//Sa�da de Dados.
	cout << fixed << setprecision(3) << endl;
	cout << "Soma = " << tsoma << endl;

	return 0;
}
