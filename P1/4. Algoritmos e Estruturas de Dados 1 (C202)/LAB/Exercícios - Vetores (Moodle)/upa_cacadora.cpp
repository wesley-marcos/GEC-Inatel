#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>

using namespace std;

int main ()
{

	int pok[10], soma = 0, maior = -1, M;

	for (int i = 0; i < 10; i++)
	{

		cin >> pok[i];

		soma = soma + pok[i];

		if (pok[i] > maior)
		{
			M = i + 1;
			maior = pok[i];
		}
	}

	cout << "Total: " << soma << endl;
	cout << "Mais capturado foi o " << M << endl;

	return 0;
}
