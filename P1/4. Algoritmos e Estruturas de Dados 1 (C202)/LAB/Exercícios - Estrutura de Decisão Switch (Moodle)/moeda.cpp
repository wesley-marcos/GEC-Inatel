#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main ()
{

	double P;
	int C;

	cin >> P;

	cin >> C;

	switch (C)
	{
	case 1:
		cout << fixed << setprecision(2) << "R$" << P * 3.86 << endl;
		break;

	case 2:
		cout << fixed << setprecision(2) << "R$" << P * 3.77 << endl;
		break;

	case 3:
		cout << fixed << setprecision(2) << "R$" << P * 4.41 << endl;
		break;

	case 4:
		cout << fixed << setprecision(2) << "R$" << P * 0.19 << endl;
		break;

	case 5:
		cout << fixed << setprecision(2) << "R$" << P * 5.00 << endl;
		break;

	default:
		cout << "Codigo Invalido" << endl;

	}

	return 0;
}
