#include<iostream>
#include<cmath>
#include<locale>

using namespace std;

int main () {
	setlocale(LC_ALL, "Portuguese"); //Para podermos usar as palavras na l�ngua portuguesa.
	
	//Declara��o de Vari�veis.
	float V0, S0, a, t, V, S;

	//Entrada de Dados.
	cout << "Digite o valor da velocidade inicial: " << endl;
	cin >> V0;

	cout << "Digite o valor da posi��o inicial: " << endl;
	cin >> S0;

	cout << "Digite o valor da acelera��o: " << endl;
	cin >> a;

	cout << "Digite o valor do tempo percorrido: " << endl;
	cin >> t;
	
	//Opera��es Matem�ticas.
	V = V0 + (a * t);
	S = (S0 + V0) * t + (0.5 * a * pow(t, 2));

	//Sa�da de Dados.
	cout << "O valor da velocidade �: " << V << endl;
	cout << "O valor da posi��o final �: " << S << endl;
	
	//FIM.
	return 0;
}
