#include<iostream>
#include<cmath>
#include<locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int l, c, a;

	cout << "Digite o valor da largura da placa: " << endl;
	cin >> l;
	cout << "Digite o valor do comprimento da placa: " << endl;
	cin >> c;
	if (l > 0 && c > 0)
	{
		a = l * c;
		if(a >= 295 && a <= 305)
		{
			cout << "Área = " << a << "cm " << "PASSOU" << endl;


		}
		else
			cout << "Área = " << a << "cm " << "NÃO PASSOU" << endl;
	}
	else
	{

		cout << "ERRO DE ENTRADA" << endl;
	}



	return 0;
}
