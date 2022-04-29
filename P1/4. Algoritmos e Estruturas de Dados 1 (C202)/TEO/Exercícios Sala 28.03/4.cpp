#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

int main ()
{
	setlocale (LC_ALL, "Portuguese");

	int n1, n2, n3, n4, i, j;

	cout << "Digite as tabuadas desejadas: " << endl;
	cin >> n1 >> n2 >> n3 >> n4;

	for (i = 5; i <= 8; i++)
	{
		for(j = 1; j <= 10; j++)
		{
			cout << j << "*" << i << "=" << j*i<<" ";
		}
		cout<<endl;
	}





	return 0;
}