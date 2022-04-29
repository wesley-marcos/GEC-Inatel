#include <iostream>
#include <cstring>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{

	double altura[3], soma, maior = -1;

	for (int i = 0; i < 4; i++)
	{
		cin >> altura[i];
		if (altura[i] > 0)
		{
			if (altura[i] > maior)
			{
				maior = altura[i];
			}
		}
	}

	if (altura[0] == maior)
	{
		cout << "Matheus" << endl;
	}

	if (altura[1] == maior)
	{
		cout << "Vinicius" << endl;
	}

	if (altura[2] == maior)
	{
		cout << "Pedro Rafael" << endl;
	}

	if (altura[3] == maior)
	{
		cout << "Darlan" << endl;
	}


	if (altura[1] < maior)
	{
		soma = ((maior) - (altura[1]));
		cout << fixed << setprecision(2);
		cout << soma << endl;
	}

	else if (altura[1] == maior)
	{
		cout << "0.00" << endl;
	}

	return 0;
}
