#include<iostream>
#include<locale>
#include<cmath>

using namespace std;

int main() {
	setlocale (LC_ALL, "Portuguese"); //Para podermos usar as palavras na l�ngua portuguesa.
	
	//Declara��o de Vari�veis.
	float q1, q2, dist, f, k;
	k = 9 * pow(10, 9);
	
	//Entrada de Dados.
	cout << "Digite os valores das duas cargas correspondentes, em Coulomb: " << endl;
	cin >> q1 >> q2;

	cout << "Digite o valor da dist�ncia entre essas cargas, em metros: " << endl;
	cin >> dist;
	
	//Opera��o Matem�tica.
	f = k * (q1 * q2 / (dist * dist));
	
	//Sa�da de Dados.
	cout << "O Valor da intensidade da for�a, em Newton, �: " << f;
	
	//FIM.
	return 0;
}
