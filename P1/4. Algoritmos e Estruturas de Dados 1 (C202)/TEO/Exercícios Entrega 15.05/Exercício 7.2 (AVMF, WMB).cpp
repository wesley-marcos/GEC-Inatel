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
	setlocale(LC_ALL, "Portuguese"); //Para habilitarmos o uso da l�ngua portuguesa.

	int N, maior;
	double soma = 0;
	
	//Entrada/Sa�da de Dados.
	cout << "Entre com o n�mero de habitantes: " << endl;
	cin >> N;
	
	//Cr�tica de Dados para n�mero de habitantes.
	while(N <= 0)
	{
		cout << "Entre com o n�mero de habitantes: " << endl;
		cin >> N;

	}

	struct cadastro pesquisa[N];
	
	cin.ignore();

	for (int i = 0; i < N; i++)
	{

		cout << "Entre com seu CPF: " << endl;
		cin.getline(pesquisa[i].cpf, 20);

		cout << "Entre com o sal�rio: " << endl;
		cin >> pesquisa[i].salario;

		cout << "Entre com a idade: " << endl;
		cin >> pesquisa[i].idade;

		cout << "Entre com o n�mero de filhos: " << endl;
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
	
	
	cout << "A m�dia do n�mero de filhos: " << (soma / N) * 1.0 << endl;
	
 	
 	for (int k = 0; k < N; k++){
		 
		 if (pesquisa[k].idade == maior){
			 
			 cout << fixed << setprecision(2) << "O valor do sal�rio da pessoa mais velha �: R$" << pesquisa[k].salario << endl;
			 
		 }
		 
		 if (pesquisa[k].idade == maior){
			 
			 cout << "O CPF da pessoa mais velha �: " << pesquisa[k].cpf << endl;
		 }	 
	 }


	return 0;
}
