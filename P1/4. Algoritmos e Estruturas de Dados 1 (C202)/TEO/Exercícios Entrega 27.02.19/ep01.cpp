#include<iostream>
#include<locale>
#include<cmath>

using namespace std;

int main() {
	setlocale (LC_ALL, "Portuguese"); //Para podermos usar as palavras na l�ngua portuguesa.
	
	//Declara��o das vari�veis.
	float n1, n2, n3, p1, p2, p3, mas, map;

	//Entrada de dados.
	cout << "Digite as tr�s notas: " << endl;
	cin >> n1 >> n2 >> n3;

	cout << "Digite os tr�s pesos: " << endl;
	cin >> p1 >> p2 >> p3;

	//Opera��es Matem�ticas.
	mas = (n1 + n2 + n3) / 3;
	map = (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);

	//Sa�da de Dados.
	cout << "A M�dia Aritm�tica Simples �: " << mas << endl;
	cout << "A M�dia Aritm�tica Ponderada �: " << map << endl;

	//FIM.
	return 0;
}
