#include <iostream>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int usuario;

	cin >> usuario;
	
	int amigos[usuario], maior = 0, menor = 99999, bigger, little;

	for(int i = 0; i < usuario; i++)
	{
		cin >> amigos[i];

		if(amigos[i] > maior)
		{
			maior = amigos[i];
			bigger = i;
		}
		if(amigos[i] < menor)
		{
			menor = amigos[i];
			little = i;
		}
	}
	
	cout << "Menor: " << menor << endl;
	cout << "Posicao: " << little << endl;
	cout << "Maior: " << maior << endl;
	cout << "Posicao: " << bigger << endl;

	return 0;
}
