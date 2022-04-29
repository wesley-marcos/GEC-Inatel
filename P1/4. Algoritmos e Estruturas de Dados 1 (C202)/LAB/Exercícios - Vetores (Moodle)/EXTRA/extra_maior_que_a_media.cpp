#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int N;

	do{

		cin >> N;
	}
	
	while(!(N > 0 && N < 1000));

	double valores[N], media, cont = 0, soma = 0, maior = 0, aux;;
	int i;

	for(i = 0; i < N; i++)
	{
		cont++;
		
		cin >> valores[i];
		
		soma = soma + valores[i];

	}
	for(i = 0; i < N; i++)
	{
		media = soma / cont;
		
		if(valores[i] > media){
			
			maior = maior + 1;
		}
	}

	if(N > 1)
	{
		cout << "Media: " << media << endl;
		cout << "Maior que a media: " << maior << endl;
	}

	return 0;
}

