#include<iostream>
#include<cmath>
#include<locale>
#include<iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	double x, y, r1, r2, r3;

	cout << "Digite o valor da vari�vel 'x': " << endl;
	cin >> x;

	cout << "Digite o valor da vari�vel 'y': " << endl;
	cin >> y;

	if (x > y)
	{
		r1 = pow (x, 2) - pow (y, 2) + (2 * x * y);

		cout << fixed << setprecision(2);
		cout << "O Valor da Fun��o �: " << r1 << endl;
	}

	else if (x == y)
	{
		r2 = (2 * x * y) + x + y;

		cout << fixed << setprecision(2);
		cout << "O Valor da Fun��o �: " << r2 << endl;
	}

	else 
	{
		r3 = pow (y, 2) + pow (x, 2) + (2 * x * y);

		cout << fixed << setprecision(2);
		cout << "O Valor da Fun��o �: " << r3 << endl;
	}

	return 0;
}
