#include<iostream>
#include<locale>
#include<cmath>

using namespace std;

int main() {
	setlocale (LC_ALL, "Portuguese"); //Para podermos usar as palavras na língua portuguesa.
	
	//Declaração das variáveis.
	float n1, n2, n3, p1, p2, p3, mas, map;

	//Entrada de dados.
	cout << "Digite as três notas: " << endl;
	cin >> n1 >> n2 >> n3;

	cout << "Digite os três pesos: " << endl;
	cin >> p1 >> p2 >> p3;

	//Operações Matemáticas.
	mas = (n1 + n2 + n3) / 3;
	map = (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);

	//Saída de Dados.
	cout << "A Média Aritmética Simples é: " << mas << endl;
	cout << "A Média Aritmética Ponderada é: " << map << endl;

	//FIM.
	return 0;
}
