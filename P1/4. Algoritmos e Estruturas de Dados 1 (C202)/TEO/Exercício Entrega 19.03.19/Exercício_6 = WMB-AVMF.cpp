#include<iostream>
#include<cmath>
#include<locale>
#include<iomanip>

using namespace std;

//Função Principal
int main()
{
//Para podermos usar as palavras na língua portuguesa.
setlocale(LC_ALL, "Portuguese");

	//Declaração das Variáveis.
	double x1, x2, y1, y2, z1, z2, mod_1, mod_2, prod_esc;

	//Entrada de Dados.
	cout << "Digite os valores de x, y e z do Primeiro Vetor: " << endl;
	cin >> x1 >> y1 >> z1;

	cout << "Digite os valores de x, y e z do Segundo Vetor: " << endl;
	cin >> x2 >> y2 >> z2;
	
	//Operações Matemáticas.
	mod_1 = sqrt(pow(x1, 2) + pow (y1, 2) + pow (z1, 2));

	mod_2 = sqrt(pow(x2, 2) + pow (y2, 2) + pow (z2, 2));

	prod_esc = (x1 * x2) + (y1 * y2) + (z1 * z2);

	//Saída de Dados.
	cout << fixed << setprecision (3);
	cout << "O valor do módulo do Primeiro Vetor é: " << mod_1 << endl;

	cout << fixed << setprecision (3);
	cout << "O valor do módulo do Segundo Vetor é: " << mod_2 << endl;

	cout << fixed << setprecision (3);
	cout << "O valor do Produto Escalar dos dois vetores é: " << prod_esc << endl;

	return 0;
}
//Fim da Função Principal ou Fim do Código.