#include <iostream>
#include <iomanip>
#include <cmath>
#include <locale>

using namespace std;

int main ()
{setlocale(LC_ALL, "Portuguese"); //Para habilitarmos a l�ngua Portuguesa.

	//Declara��o de Vari�veis.
	double massai, massaf, cont=0., tempo;

	//Entrada de Dados.
	cout << "Digite o valor da massa: " <<endl;
	cin >> massai;
	
	massaf = massai;
	
	//Verifica��o da massa.
	while (massaf >= 0.5){
		
		massaf = massaf / 2;
		cont++;
	}
	
	//Sa�da de Dados.
	cout << "A massa inicial �: " << massai <<endl;
	
	cout << "A massa final �: " << massaf << endl;
	
	cout << "O tempo ser�: " << cont * 50 << endl;

	return 0;
}//Fim do C�digo.
