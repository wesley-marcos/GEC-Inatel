#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;

	cout << "Digite um numero: " << endl;
	cin >> n;

	if (n % 2 == 0 && n != 0)

		cout << "Par" << endl;
	
	else if (n % 2 != 0)

		cout << "Impar" << endl;

	else cout << "Constancia Matematica." << endl;





	return 0;
}
