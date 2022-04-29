#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main (){
	
	//Declara��o de Vari�veis.
	char nome[50], C;
	int idade, mais_novo, destino=0, alemanha=0, egito=0;
	double custo, preco=0, media, porcentagem=0;
	
	//Entrada de Dados.
	cin >> C;
	 
	
	//Estrutura De Repeti��o.
	while (C != 'd'){
		
		//Entrada de Dados.
		cin >> idade;
		
		cin.ignore();
		cin.getline(nome, 50);
		
		cin >> custo;
		preco = preco + custo;
		
		//Estrutura de Decis�o (menor idade).
		if (idade > 0){
			
			if (idade < mais_novo){
				
				mais_novo = idade;
				
			}
		}

		//Estrutura de Decis�o (custo na Alemanha).
		if (C == 'a'){
			
			alemanha++; //N�mero de vezes que o usu�rio escolher a Alemanha.
			destino++;	//N�mero de vezes que o usu�rio entrar com qualquer um dos destinos.
			
			media = preco / alemanha; 
		}
		
		//Estrutura de Decis�o (porcentagem de pessoas que escolheram o Egito).
		if (C == 'b'){
			
			egito++;    //N�mero de vezes que o usu�rio escolher o Egito.
			destino++;	//N�mero de vezes que o usu�rio entrar com qualquer um dos destinos.
			
			porcentagem = (egito * (100 * 1.0)) / destino;
		}
		
		cin >> C;	//Entrada de escolha dos destinos.
		destino++; //N�mero de vezes que o usu�rio entrar com qualquer um dos destinos.
	}
	
	//Sa�da de Dados.
	cout << fixed << setprecision(2);
	cout << "Idade da pessoa mais nova: " << mais_novo << endl;
	cout << "Porcentagem de votos para o Egito: " << porcentagem << endl;
	cout << "Media do custo gasto na Alemanha: " << media << endl;
	
	return 0;
}