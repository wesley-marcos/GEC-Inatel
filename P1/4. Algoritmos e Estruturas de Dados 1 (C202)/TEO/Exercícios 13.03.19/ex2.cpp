#include<iostream>
#include<cmath>
#include<locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float he, hf, H;

	cout << "Digite o n�mero de Horas Extras Cumpridas: " << endl;
	cin >> he;

	cout << "Digite o n�mero de Horas Faltas: " << endl;
	cin >> hf;

	H = he - 2 / 3.0 * hf;

	if (H > 15)
	{
		cout << "Sua gratifica��o ser�: R$500,00" << endl;

	}

	if (H >= 10 && H <= 15)
	{
		cout << "Sua gratifica��o ser�: R$300,00" << endl;

	}

	if (H >= 5 && H < 10)
	{
		cout << "Sua gratifica��o ser�: R$150,00" << endl;

	}

	if (H > 0 && H < 5)
	{
		cout << "Sua gratifica��o ser�: R$50,00" << endl;
	}

	if (H <= 0)
	{
		cout << "Sem gratifica��o." << endl;

	}

	return 0;
}
