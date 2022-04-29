#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{

	double temp, sub, res, p, mult1=1, mult2=1;

	cin >> temp >> res >> sub;

	if (sub - 2 < 0)
	{

		mult1 = -1;

	}

if (res - 1000 < 0)
	{

		mult2 = -1;

	}

	p = ((sqrt(temp + 5)) / ((sub - 2) * mult1)) * ((pow (sub, 3)) / ((res - 1000) * mult2)) + (1.0 / 42);

	cout << fixed << setprecision (2);
	cout << p;
	return 0;
}
