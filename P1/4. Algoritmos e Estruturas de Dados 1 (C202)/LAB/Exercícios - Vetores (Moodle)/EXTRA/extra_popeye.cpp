#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double fruta[4], esp[4], maior_fruta = -9999, maior_esp = -9999, mais_vendida = -9999;
	float soma1, soma2, soma3, soma4, semana = -9999;
	int i;

	for (i = 0; i < 4; i++)
	{

		cin >> fruta[i] >> esp[i];

		if (fruta[i] > maior_fruta)
		{

			if (fruta[0] > maior_fruta)
			{

				maior_fruta = fruta[0];
			}

			else if (fruta[1] > maior_fruta)
			{

				maior_fruta = fruta[1];
			}

			else if (fruta[2] > maior_fruta)
			{

				maior_fruta = fruta[2];
			}

			else if (fruta[3] > maior_fruta)
			{

				maior_fruta = fruta[3];
			}

		}

		if (esp[i] > maior_esp)
		{

			if (esp[0] > maior_esp)
			{

				maior_esp = esp[0];
			}

			else if (esp[1] > maior_esp)
			{

				maior_esp = esp[1];
			}

			else if (esp[2] > maior_esp)
			{

				maior_esp = esp[2];
			}

			else if (esp[3] > maior_esp)
			{

				maior_esp = esp[3];
			}

		}

		soma1 = fruta[0] + esp[0];

		soma2 = fruta[1] + esp[1];

		soma3 = fruta[2] + esp[2];

		soma4 = fruta[3] + esp[3];


		if (soma1 > soma2 && soma1 > soma3 && soma1 > soma4)
		{

			semana = 1;
		}

		else if (soma2 > soma1 && soma2 > soma3 && soma2 > soma4)
		{

			semana = 2;
		}

		else if (soma3 > soma1 && soma3 > soma2 && soma3 > soma4)
		{

			semana = 3;
		}

		else if (soma4 > soma1 && soma4 > soma2 && soma4 > soma3)
		{

			semana = 4;
		}


		if (maior_fruta > maior_esp)
		{

			mais_vendida = maior_fruta;
		}

		else if (maior_esp > maior_fruta)
		{

			mais_vendida = maior_esp;
		}

	}

	cout << "Semana que gastou mais: " << semana << endl;

	if (mais_vendida == maior_fruta)
	{

		cout << "Compra mais cara: fruta" << endl;
	}

	else if (mais_vendida == maior_esp)
	{

		cout << "Compra mais cara: espinafre" << endl;
	}

	cout << fixed << setprecision(2);
	cout << "Valor: R$ " << mais_vendida << endl;

	return 0;
}
