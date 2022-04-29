#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

int main ()
{setlocale (LC_ALL, "Portuguese");
	
	int n1, n2, s, i;
	
	cout << "Digite os valores dos dois números. " <<endl;
	cin >> n1 >> n2;
	
	s = 0;
	for (i=-10; i<=50; i++)
	{
		s = s + i ;
				
	}
	
	cout << "A Soma dos Números é: " << s <<endl;
	
	
	
	return 0;
}