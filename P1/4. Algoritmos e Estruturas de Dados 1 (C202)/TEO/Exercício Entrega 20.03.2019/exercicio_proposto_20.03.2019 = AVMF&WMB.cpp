/*Escreva um programa que implemente uma calculadora simples, com 4 opera��es (+, -, * e /).
O usu�rio dever� fornecer dois operandos (dois n�meros quaiquer) e a opera��o desejada.*/

//Declara��o de Bibliotecas
#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

//Fun��o Principal
int main()
{
	setlocale(LC_ALL, "Portuguese");

//Declara��o de Vari�veis
	double x, y;
	char op;

//Entrada de Dados
	cout << "Digite os dois n�meros para opera��o:" << endl;
	cin >> x >> y;
	cout << "Digite a opera��o matem�tica desejada, sendo elas: +,-,*ou /." << endl;
	cin >> op;

//Estrutura de Decis�o
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
		else cout << "N�o existe divis�o por 0" << endl;
		break;
	default:
		cout << "Opera��o Matem�tica Inv�lida." << endl;
	}
	return 0;
//Fim  da Fun��o Principal
}
