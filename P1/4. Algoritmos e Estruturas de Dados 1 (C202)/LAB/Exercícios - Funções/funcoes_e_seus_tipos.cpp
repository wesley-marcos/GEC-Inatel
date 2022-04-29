#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int potencia(int base, int exp){
	
	int pot = 1;
	
	for (int i = 1; i <= exp; i++){
	
		pot = pot * base;
	}
	
	return pot;
}

void fatorial(int x){
	
	int fat = 1;
	
	for (fat = 1; x > 1; x--){
		
		fat = fat * x;
	}
	
	cout << fat << endl;
}

void primo(){
	
	int cont3, cont2, cont=0, n;
	
	cin >> n;
	
	while (cont < n){
		
		cont3 = 0;
		
		for(int cont2 = 1; cont2 <= n; cont2++){
			
			if(n%cont2 == 0){
				
				cont3++;
			}
		}
		
		cont++;
	}
	
	if(cont3 == 2){
			
		cout << "Primo"<< endl;
	}
		
	else{
			
		cout << "Nao eh primo" << endl;
	}
		
}
int main()
{
	int base, exp, x, n;
	char cod;
	
	cin >> cod;
	
	if (cod == 'a'){
		
		cin >> base >> exp;
		
		cout << potencia(base, exp) << endl;
	}
	
	if (cod == 'b'){
		
		cin >> x;
		
		fatorial(x);
		
	}
	
	if (cod == 'c'){
		
		
		primo();
		
	}
	
	return 0;
}