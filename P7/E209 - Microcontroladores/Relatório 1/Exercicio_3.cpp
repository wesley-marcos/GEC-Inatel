#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//Declaração de variáveis
	int num_entradas;
	int num_inteiros[5];
	int qtd_pares = 0;
	int qtd_impares = 0;
	int qtd_pos = 0;
	int qtd_neg = 0;
	
	//Entrada
	cout << "Entre com a quantidade de testes que serao feitos: " << endl;
	cin >> num_entradas;
	
	//Lógica e saída de dados
	cout << "Entre com 5 numeros inteiros: " << endl;
	
	while(num_entradas != 0){
		
		for(int i = 0; i < 5; i++){
			
			cin >> num_inteiros[i];
			
			if(num_inteiros[i] % 2 == 0){
				qtd_pares++;
			}
			
			else{
				qtd_impares++;
			}
			
			if(num_inteiros[i] >= 0){
				qtd_pos++;
			}
			
			else{
				qtd_neg++;
			}
		}
		
		//Saída de dados
		cout << "Quantidade de numeros pares: " << qtd_pares << endl;
		cout << "Quantidade de numeros impares: " << qtd_impares << endl;
		cout << "Quantidade de numeros positivos: " << qtd_pos << endl;
		cout << "Quantidade de numeros negativos: " << qtd_neg << endl;
				
		qtd_pares = 0;
		qtd_impares = 0;
		qtd_pos = 0;
		qtd_neg = 0;
		
		num_entradas--;
	}
	
	
	
	return 0;
}