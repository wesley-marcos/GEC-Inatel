#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

int main ()
{setlocale (LC_ALL, "Portuguese");
	
	int n1, n2, s, i;
	
	cout << "Digite os valores dos dois n�meros. " <<endl;
	cin >> n1 >> n2;
	
	s = 0;
	for (i = 2; i<=50; i = i + 2)
	{
		s = s + i ;
				
	}
	
	cout << "A Soma dos N�meros �: " << s <<endl;
	
	
	
	return 0;
}