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

	int vet[N], menor = 2000, i, posicao, aux = 0;

	for(i = 0; i < N; i++){
		
		cin >> vet[i];

		if(vet[i] < 0){
			
			vet[i] = 0;
		}

		if(vet[i] < menor && vet[i] > 0){
			
			menor = vet[i];
			posicao = i;
			aux++;
		}
	}
	
	if(aux > 0){
		
		cout << "Menor: " << menor << endl;
		cout << "Posicao: " << posicao << endl;
	}
	
	if(aux == 0){
		
		cout << "Menor: " << -1 << endl;
		cout << "Posicao: " << -1 << endl;
	}
	
	for(i = 0; i < N; i++){
		
		cout << pow(vet[(N - 1) - i], 2) << endl;
	}

	return 0;
}
