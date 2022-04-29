#include <iostream>
#include <cmath>
#include <locale>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese"); //Biblioteca para expressões em português

	//Declaração de Variáveis
	float salario_base, salario_final;
	int tempo_servico;

	//Entrada de Dados
	cout << "Digite o Salário Base: " << endl;
	cin >> salario_base;

	cout << "Digite o Tempo de Serviço, em anos: " << endl;
	cin >> tempo_servico;

	//Estrutura de Decisão
	if(tempo_servico > 5) //Se for verdadeiro
	{
		salario_final = salario_base * 1.1;
		cout << fixed << setprecision (2);
		cout << "Seu salário é igual à: R$" << salario_final;
	}

	//Se for falso:
	else
	{
		cout << fixed << setprecision (2);
		cout << "Você não tem direito ao abono. Seu salário será igual à: R$" << salario_base;
	}
}
