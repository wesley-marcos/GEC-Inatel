#include<iostream>
#include<cmath>
#include<locale>
#include<iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float x, y, z;

	cout << "Digite os respectivos valores de x, y e z: " << endl;
	cin >> x >> y >> z;

	if (x > 0 && y > 0 && z > 0 )
	{
		if (x < y + z && y < x + z && z < x + y)
		{
			if(x == y && y == z && x == z)
			{
				cout << "Tri�ngulo equil�tero." << endl;
			}

			else if(x != y && x != z && y != z)
			{
				cout << "Tri�ngulo Escaleno." << endl;
			}
			else if (x == y || x == z || y == z)
			{
				cout << "Tri�ngulo is�sceles." << endl;
			}
			else
			{
				cout << "N�o formam um tri�ngulo." << endl;
			}

		}
	}
	else
	{
		cout << "Erro de entrada." << endl;
	}
	return 0;
}
