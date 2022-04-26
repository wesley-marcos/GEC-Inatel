#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//Declaração de variáveis
	int quant_laranjas;
	float preco;
	float total;
	
	//Entrada
	cout << "Entre com a quantidade de laranjas: " << endl;
	cin >> quant_laranjas;
	
	//Lógica e saída de dados
	if(quant_laranjas < 12){
		preco = 0.80;
		total = preco * quant_laranjas;
		cout << "Preco da unidade: R$";
		cout << fixed << setprecision(2) << preco << endl;
		cout << "Preco total: ";
		cout << fixed << setprecision(2) << total;
	}
	
	else{
		preco = 0.65;
		total = preco * quant_laranjas;
		cout << "Preco da unidade: R$";
		cout << fixed << setprecision(2) << preco << endl;
		cout << "Preco total: R$";
		cout << fixed << setprecision(2) << total;
	}
	
	return 0;
}