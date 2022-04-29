#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <locale>

using namespace std;

//Struct cadastro.
struct cadastro
{

	char cpf[20];
	int filho, idade;
	double salario;

};

int main()
{
	setlocale(LC_ALL, "Portuguese"); //Para habilitarmos o uso da língua portuguesa.

	int N, maior;
	double soma = 0;
	
	//Entrada/Saída de Dados.
	cout << "Entre com o número de habitantes: " << endl;
	cin >> N;
	
	//Crítica de Dados para número de habitantes.
	while(N <= 0)
	{
		cout << "Entre com o número de habitantes: " << endl;
		cin >> N;

	}

	struct cadastro pesquisa[N];
	
	cin.ignore();

	for (int i = 0; i < N; i++)
	{

		cout << "Entre com seu CPF: " << endl;
		cin.getline(pesquisa[i].cpf, 20);

		cout << "Entre com o salário: " << endl;
		cin >> pesquisa[i].salario;

		cout << "Entre com a idade: " << endl;
		cin >> pesquisa[i].idade;

		cout << "Entre com o número de filhos: " << endl;
		cin >> pesquisa[i].filho;
		
		cin.ignore();

		soma = soma + pesquisa[i].filho;
	}

	maior = pesquisa[0].idade;

	for (int j = 1; j < N; j++)
	{

		if (pesquisa[j].idade > maior)
		{

			maior = pesquisa[j].idade;
		}
	}
	
	
	cout << "A média do número de filhos: " << (soma / N) * 1.0 << endl;
	
 	
 	for (int k = 0; k < N; k++){
		 
		 if (pesquisa[k].idade == maior){
			 
			 cout << fixed << setprecision(2) << "O valor do salário da pessoa mais velha é: R$" << pesquisa[k].salario << endl;
			 
		 }
		 
		 if (pesquisa[k].idade == maior){
			 
			 cout << "O CPF da pessoa mais velha é: " << pesquisa[k].cpf << endl;
		 }	 
	 }


	return 0;
}
