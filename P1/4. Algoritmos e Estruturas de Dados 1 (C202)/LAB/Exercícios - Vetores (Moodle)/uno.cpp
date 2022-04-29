#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>

using namespace std;

int main()
{

	int N, media, soma = 0;

	cin >> N;

	float carta[N], jogador = 0, cont = 0, jogador_menos = 0;

	for (int i = 0; i < N; i++)
	{

		cin >> carta[i];
		cont++;

		soma = soma + carta[i];

		media = soma / cont;
	}
	for (int i = 0; i < N; i++)
	{
		if (carta[i] > media)
		{

			jogador++;

		}
	}

	cout << "Media: " << media << endl;

	if (jogador > 0)
	{
		cout << "Jogador(es) com cartas acima da media: " << jogador << endl;

	}

	else
	{
		cout << "Ninguem esta acima da media." << endl;
	}

	return 0;
}
