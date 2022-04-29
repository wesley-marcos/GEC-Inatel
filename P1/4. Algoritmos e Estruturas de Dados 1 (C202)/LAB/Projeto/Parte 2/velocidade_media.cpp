#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main ()
{

	int p;
	double d, t, vm, dist=0, tempo=0;

	cin >> p;

	for (int i = 0; i < p; i++)
	{
		cin >> d >> t;
		dist = dist + d;
		tempo = tempo + t;

	}

	vm = dist/tempo;
	
	cout << fixed << setprecision(2);
	cout << "Velocidade Media = " << vm <<endl;



	return 0;
}
