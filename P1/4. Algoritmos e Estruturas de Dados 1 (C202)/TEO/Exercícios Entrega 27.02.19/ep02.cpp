#include<iostream>
#include<locale>
#include<cmath>

using namespace std;

int main() {
	setlocale (LC_ALL, "Portuguese"); //Para podermos usar as palavras na língua portuguesa.
	
	//Declaração de Variáveis.
	float q1, q2, dist, f, k;
	k = 9 * pow(10, 9);
	
	//Entrada de Dados.
	cout << "Digite os valores das duas cargas correspondentes, em Coulomb: " << endl;
	cin >> q1 >> q2;

	cout << "Digite o valor da distância entre essas cargas, em metros: " << endl;
	cin >> dist;
	
	//Operação Matemática.
	f = k * (q1 * q2 / (dist * dist));
	
	//Saída de Dados.
	cout << "O Valor da intensidade da força, em Newton, é: " << f;
	
	//FIM.
	return 0;
}
