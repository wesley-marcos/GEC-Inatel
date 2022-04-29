#include <iostream>
#include <cmath>
#include <locale>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese"); //Biblioteca para express�es em portugu�s

	//Declara��o de Vari�veis
	float salario_base, salario_final;
	int tempo_servico;

	//Entrada de Dados
	cout << "Digite o Sal�rio Base: " << endl;
	cin >> salario_base;

	cout << "Digite o Tempo de Servi�o, em anos: " << endl;
	cin >> tempo_servico;

	//Estrutura de Decis�o
	if(tempo_servico > 5) //Se for verdadeiro
	{
		salario_final = salario_base * 1.1;
		cout << fixed << setprecision (2);
		cout << "Seu sal�rio � igual �: R$" << salario_final;
	}

	//Se for falso:
	else
	{
		cout << fixed << setprecision (2);
		cout << "Voc� n�o tem direito ao abono. Seu sal�rio ser� igual �: R$" << salario_base;
	}
}
