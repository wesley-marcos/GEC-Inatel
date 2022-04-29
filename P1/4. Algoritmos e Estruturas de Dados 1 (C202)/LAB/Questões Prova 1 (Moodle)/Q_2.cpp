#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main ()
{

	int N, tempo, menor, maior = 0, par = 0, impar = 0;
	char nome[50];

	cin >> N;

	while (N < 0)
	{

		cin >> N;
	}

	for (int i = 0; i < N; i++)
	{

		cin >> tempo;

		menor = tempo;

		while (tempo < 0)
		{

			cin >> tempo;
		}

		if (tempo > 0)
		{

			if (tempo > maior)
			{
				maior = tempo;
			}

			if (tempo < menor)
			{
				menor = tempo;
			}
		}



		if (tempo > 0)
		{

			if (tempo % 2 == 0)
			{

				par++;
			}

			else if (tempo % 2 != 0)
			{

				impar++;
			}
		}

		cin.ignore();
		cin.getline(nome, 50);

	}

	cout << "Menor tempo = " << menor << endl;
	cout << "Maior tempo = " << maior << endl;
	cout << "Tempos pares = " << par << endl;
	cout << "Tempos impares = " << impar << endl;

	return 0;
}
