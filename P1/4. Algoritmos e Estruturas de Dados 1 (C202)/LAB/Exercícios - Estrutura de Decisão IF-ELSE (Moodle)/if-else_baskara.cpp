#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	// Declaração de Variáveis (R1 e R2 correspondem à X1 e X2, respectivamente.
	float a, b, c, delta, r1, r2;

	cin >> a >> b >> c;

	delta = pow(b, 2) - 4 * a * c;

	if (a == 0 || delta < 0)
	{
		cout << "Impossivel Calcular." << endl;

	}
	else
	{
		r1 = (- b + sqrt(delta)) / (2.0 * a);

		r2 = (- b - sqrt(delta)) / (2.0 * a);
		
		cout << fixed << setprecision(5);
		
		cout << "R1 = " << r1 << endl;
		cout << "R2 = " << r2 << endl;

	}
	return 0;
}
