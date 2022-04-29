#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main (){
	
	//Declara��o de Vari�veis.
	int x, y;     // x e y ser�o inteiros.
	double fx;    // fx ter� precis�o dupla (n�mero real).
	
	//Entrada de Dados.
	cin >> x >> y;
	
	//Equa��o Matem�tica.
	fx = ((pow(x * y, 1/3.0)) / (y + 25)) * ((x + y) / pow(x,y));
	
	//Sa�da de Dados.
	cout << fixed << setprecision(3); //Sa�da com 3 casas de precis�o.
	cout << "f(x) = " << fx <<endl; 
	
	
	return 0;
}