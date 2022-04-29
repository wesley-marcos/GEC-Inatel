#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{

	double N, x, ganho = 0, perda = 0, ant;
	
	cin >> N;

	for (int i = 0; i < N; i++)
	{

		cin >> x;

		if (i == 0)
		{

			ant = x;
		}

		else{

			if (ant < x)
			{

				ganho = ganho + (x - ant);
			}
			if (ant > x)
			{

				perda = perda + (ant - x);
			}

			ant = x;
		}
	}

	cout << fixed << setprecision(2);
	cout << "Ganho de elevacao: " << ganho << endl;
	cout << "Perda de elevacao: " << (perda * -1) << endl;

	return 0;
}
