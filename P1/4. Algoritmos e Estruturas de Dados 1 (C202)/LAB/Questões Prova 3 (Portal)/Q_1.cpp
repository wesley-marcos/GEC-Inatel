#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main (){
	
	//Declaração de Variáveis.
	int x, y;     // x e y serão inteiros.
	double fx;    // fx terá precisão dupla (número real).
	
	//Entrada de Dados.
	cin >> x >> y;
	
	//Equação Matemática.
	fx = ((pow(x * y, 1/3.0)) / (y + 25)) * ((x + y) / pow(x,y));
	
	//Saída de Dados.
	cout << fixed << setprecision(3); //Saída com 3 casas de precisão.
	cout << "f(x) = " << fx <<endl; 
	
	
	return 0;
}