#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

int main ()
{
	setlocale (LC_ALL, "Portuguese");

	double   s, i;

	
	s = 0;
	for (i = 1; i <= 10; i++ )
	{
		s = s + (i/(i+1)) ;
	}

	cout << "A Soma dos Números é: " << s << endl;



	return 0;
}
