#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

int main ()
{
	setlocale (LC_ALL, "Portuguese");

	double  n, si, s, i, d;
	cout << "Digite o número de termos: " << endl;
	cin >> n;
	si = 1;
	s = 0;
	d = 1;
	for (i = 1; i <= n; i = i ++)
	{
		s = s + (1/d)*si ;
		si = si*(-1);
		d = d+2;
	}

	cout << "A Soma dos Números é: " << s << endl;



	return 0;
}
