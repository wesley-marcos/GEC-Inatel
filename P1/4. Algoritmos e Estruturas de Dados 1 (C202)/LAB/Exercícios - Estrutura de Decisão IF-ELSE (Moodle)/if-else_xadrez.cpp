#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int L1, L2, C1, C2 = 0;
	
	// int L1, L2, C1, C2 = 0;
	// int C1 = 0;
	// int L2 = 0;
	// int C2 = 0;

	cout << "Digite o numero de linhas e Colunas do tabuleiro: " << endl;
	cin >> L1 >> C1;
	cout << endl;
	cout << "Digite o numero de linhas e Colunas do tabuleiro: " << endl;;
	cin >> L2 >> C2;

	if (L1 % 2 == C1 % 2 || L2 % 2 == C2 % 2)
	{
		cout << "A casa inferior direita é 1." << endl;
	}
	else
	{
		cout << "A casa inferior direita é 0." << endl;
	}



	return 0;
}
