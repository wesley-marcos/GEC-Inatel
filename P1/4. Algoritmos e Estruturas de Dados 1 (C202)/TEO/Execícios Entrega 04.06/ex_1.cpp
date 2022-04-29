#include <iostream>
#include <iomanip>
#include <locale>
#include <cmath>

using namespace std;

//Função para calcular o fatorial.
int fat(int N){
	
	int fat = 1;
	
	for (int i = N; i >= 1; i--){
		
		fat = fat * i;
	}
	
	return fat;
}

//Função para fazer cosseno sem cosseno.
double cosseno (double X, int N){
	
	double E = 0, S = 0, Si = 1;
	
	for (int i = 0; i < N; i++){
		
		S = S + (pow(X, E) / fat(N)) * Si;
		
		Si = Si * -1;
		
		E = E + 2;
	}
	
	return S;
}

int main()
{setlocale(LC_ALL, "Portuguese");

	int N; //N é o número de termos.
	double X; // X o número a ser elevado.
	
	cout << "Entre com um número: " << endl;
	cin >> X;
	
	cout << "Entre com o número de termos: " << endl;
	cin >> N;
	
	while(N < 2){
		
		cout << "Entre com o número de termos: " << endl;
		cin >> N;
	}
	
	fat(N);
	
	cout << fixed << setprecision(2);
	cout << "Cosseno = " << cosseno(X, N);
	
	return 0;
}