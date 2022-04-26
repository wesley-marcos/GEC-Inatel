#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//Declaração de variáveis
	int valor;
	int result;
	int i;
	
	//Entrada de dados
	cout << "Entre com um valor entre 0 e 50: " << endl;
	cin >> valor;
	
	while(valor <= 0 || valor > 50){
		
		cout << "Valor incorreto. Entre com um numero entre 0 e 50!" << endl;
		cin >> valor;
	}
	
	//Lógica e saída de dados
	for(i = valor; i > 1; i--){
		
		result = valor % (i - 1);
		
		if(i > 0){
			cout << "Resto da divisao de " << valor << " por " << i - 1 << ": " << result << endl;
		} 
		
	}
		
	return 0;
}