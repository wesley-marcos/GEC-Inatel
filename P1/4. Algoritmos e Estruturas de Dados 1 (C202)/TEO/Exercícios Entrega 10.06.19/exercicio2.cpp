#include <iostream>
#include <iomanip>
#include <locale>
#include <cmath>

using namespace std;

int main(){setlocale(LC_ALL, "Portuguese");

	int vet[10], i1 = 0, i2 = 0, vet1[10], vet2[10];

	cout << "Entre com os 10 valores: " << endl;
	
	for(int i = 0; i < 10; i++){
		
		cin >> vet[i];
	}
	
	for(int i = 0; i < 10; i++){
		
		if(vet[i] >= 0){
			
			vet1[i1] = vet[i];
			i1++;
		}
		
		else{
			
			vet2[i2] = vet[i];
			i2++;
		}
	}
	
	cout << "Vetor 1: ";
	
	for(int i = 0; i < i1; i++){
		
		cout << vet1[i] << " ";
	}
	
	cout << endl << "Vetor 2: ";
	
	for(int i = 0; i < i2; i++){
		
		if (i2 >= 0){
			
			cout << vet2[i] << " ";
		}
		
		else cout << "Não há número negativos." << endl;
	}

	return 0;
}
