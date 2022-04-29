/*Escreva um programa que implemente uma calculadora simples, com 4 operações (+, -, * e /).
O usuário deverá fornecer dois operandos (dois números quaiquer) e a operação desejada.*/

//Declaração de Bibliotecas
#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

//Função Principal
int main()
{
	setlocale(LC_ALL, "Portuguese");

//Declaração de Variáveis
	double x, y;
	char op;

//Entrada de Dados
	cout << "Digite os dois números para operação:" << endl;
	cin >> x >> y;
	cout << "Digite a operação matemática desejada, sendo elas: +,-,*ou /." << endl;
	cin >> op;

//Estrutura de Decisão
	switch(op)
	{
	case '+':
		cout << x << "+" << y << "=" << x + y << endl;
		break;
	case '-':
		cout << x << "-" << y << "=" << x - y << endl;
		break;
	case '*':
		cout << x << "*" << y << "=" << x*y << endl;
		break;
	case '/':
		if(y != 0)  cout << x << "/" << y << "=" << x / y << endl;
		else cout << "Não existe divisão por 0" << endl;
		break;
	default:
		cout << "Operação Matemática Inválida." << endl;
	}
	return 0;
//Fim  da Função Principal
}
