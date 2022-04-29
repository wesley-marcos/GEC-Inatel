#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	
	int vet[100], i = 0, aux = 0, X, pos, t;

	do{
		
		i++;
		cin >> vet[i];
		t = i;
	}
	
	while(i < 100 && vet[i] != 0);
	
	cin >> X;

	for(int j = 1; j < t; j++){
		
		vet[i] = vet[j];
		
		if(vet[j] == X){
			
			aux = 1;
		}
	}

	if(aux == 1){
		
		cout << "Encontrado na posicao " << pos << endl;
	}
	
	else{
		
		cout << "Nao encontrado" << endl;
	}

	return 0;
}
