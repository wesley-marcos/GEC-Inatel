#include<iostream>
#include<cmath>
#include<locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float he, hf, H;

	cout << "Digite o número de Horas Extras Cumpridas: " << endl;
	cin >> he;

	cout << "Digite o número de Horas Faltas: " << endl;
	cin >> hf;

	H = he - 2 / 3.0 * hf;

	if (H > 15)
	{
		cout << "Sua gratificação será: R$500,00" << endl;

	}

	if (H >= 10 && H <= 15)
	{
		cout << "Sua gratificação será: R$300,00" << endl;

	}

	if (H >= 5 && H < 10)
	{
		cout << "Sua gratificação será: R$150,00" << endl;

	}

	if (H > 0 && H < 5)
	{
		cout << "Sua gratificação será: R$50,00" << endl;
	}

	if (H <= 0)
	{
		cout << "Sem gratificação." << endl;

	}

	return 0;
}
