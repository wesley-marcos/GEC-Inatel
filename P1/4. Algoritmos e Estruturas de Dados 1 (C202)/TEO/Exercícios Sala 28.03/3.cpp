#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

int main ()
{
	setlocale (LC_ALL, "Portuguese");

	int n1, n2, s, i, j;

	cout << "Digite o tamanho da matriz. " << endl;
	cin >> n1 >> n2;

	s = 0;
	for (i = 1; i <= 4; i++)
	{
		for(j = 1; j <= 4; j++)
		{
			s = s + i * j;
				cout << i << j<<" ";
		}
		cout<<endl;
	}





	return 0;
}
