#include<iostream>
#include<cmath>
#include<locale>
#include<iomanip>

using namespace std;

int main ()
{
	setlocale(LC_ALL, "Portuguese");

	double vmm, pa, np1, np2, np3;

	cout << "Insira o pre�o atual do produto: " << endl;
	cin >> pa;
	cout << "Insira a venda m�dia mensal do produto: " << endl;
	cin >> vmm;

	if (vmm > 0 && pa > 0)
	{
		if(vmm < 500 && pa < 30)
		{
			np1 = pa + (0.1 * pa);
			cout << fixed << setprecision(2) << endl;
			cout << "Novo pre�o: R$" << np1 << endl;
		}
		else
		{

			if(vmm >= 500 && vmm < 1200 && pa >= 30 && pa < 80)
			{
				np2 = pa + (0.15 * pa);
				cout << fixed << setprecision(2) << endl;				
				cout << "Novo pre�o: R$" << np2 << endl;
			}

			else
			{
				if(vmm >= 1200 && pa >= 80)
				{
					np3 = pa - (0.2 * pa);
					cout << fixed << setprecision(2) << endl;
					cout << "Novo pre�o: R$" << np3 << endl;
				}

				else
				{
					cout << "Pre�o sem altera��o" << endl;
				}

			}
		}
	}
			else
			{
				cout << "Erro de entrada." << endl;
			}
			return 0;



		}
