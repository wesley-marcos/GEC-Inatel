#include<iostream>
#include<cmath>
#include<locale>

using namespace std;

int main () {
	setlocale(LC_ALL, "Portuguese"); //Para podermos usar as palavras na língua portuguesa.
	
	//Declaração de Variáveis.
	float V0, S0, a, t, V, S;

	//Entrada de Dados.
	cout << "Digite o valor da velocidade inicial: " << endl;
	cin >> V0;

	cout << "Digite o valor da posição inicial: " << endl;
	cin >> S0;

	cout << "Digite o valor da aceleração: " << endl;
	cin >> a;

	cout << "Digite o valor do tempo percorrido: " << endl;
	cin >> t;
	
	//Operações Matemáticas.
	V = V0 + (a * t);
	S = (S0 + V0) * t + (0.5 * a * pow(t, 2));

	//Saída de Dados.
	cout << "O valor da velocidade é: " << V << endl;
	cout << "O valor da posição final é: " << S << endl;
	
	//FIM.
	return 0;
}
