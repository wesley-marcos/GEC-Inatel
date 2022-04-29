#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>

using namespace std;

int main ()
{setlocale(LC_ALL, "Portuguese"); //Para habilitarmos a língua Portuguesa.

	//Declaração de Variáveis.
	double massai, massaf, cont=0., tempo;

	//Entrada de Dados.
	cout << "Digite o valor da massa: " <<endl;
	cin >> massai;
	
	massaf = massai;
	
	//Verificação da massa.
	while (massaf >= 0.5){
		
		massaf = massaf / 2;
		cont++;
	}
	
	//Saída de Dados.
	cout << "A massa inicial é: " << massai <<endl;
	
	cout << "A massa final é: " << massaf << endl;
	
	cout << "O tempo será: " << cont * 50 << endl;

	return 0;
}//Fim do Código.
