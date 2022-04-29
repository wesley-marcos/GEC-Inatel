#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main (){
	
	//Declaração de Variáveis.
	char nome[50], C;
	int idade, mais_novo, destino=0, alemanha=0, egito=0;
	double custo, preco=0, media, porcentagem=0;
	
	//Entrada de Dados.
	cin >> C;
	 
	
	//Estrutura De Repetição.
	while (C != 'd'){
		
		//Entrada de Dados.
		cin >> idade;
		
		cin.ignore();
		cin.getline(nome, 50);
		
		cin >> custo;
		preco = preco + custo;
		
		//Estrutura de Decisão (menor idade).
		if (idade > 0){
			
			if (idade < mais_novo){
				
				mais_novo = idade;
				
			}
		}

		//Estrutura de Decisão (custo na Alemanha).
		if (C == 'a'){
			
			alemanha++; //Número de vezes que o usuário escolher a Alemanha.
			destino++;	//Número de vezes que o usuário entrar com qualquer um dos destinos.
			
			media = preco / alemanha; 
		}
		
		//Estrutura de Decisão (porcentagem de pessoas que escolheram o Egito).
		if (C == 'b'){
			
			egito++;    //Número de vezes que o usuário escolher o Egito.
			destino++;	//Número de vezes que o usuário entrar com qualquer um dos destinos.
			
			porcentagem = (egito * (100 * 1.0)) / destino;
		}
		
		cin >> C;	//Entrada de escolha dos destinos.
		destino++; //Número de vezes que o usuário entrar com qualquer um dos destinos.
	}
	
	//Saída de Dados.
	cout << fixed << setprecision(2);
	cout << "Idade da pessoa mais nova: " << mais_novo << endl;
	cout << "Porcentagem de votos para o Egito: " << porcentagem << endl;
	cout << "Media do custo gasto na Alemanha: " << media << endl;
	
	return 0;
}