#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <locale>

using namespace std;

//Struct registro.
struct registro
{

	char nome[50], civil;
	int sexo, idade;

};

registro cadastro[5]; 

int main()
{
	setlocale(LC_ALL, "Portuguese"); //Para habilitarmos o uso da língua portuguesa.

	int cont = 0, cont1 = 0, id_maior = 0;
	double soma = 0;

	for (int i = 0; i < 5; i++)
	{
		//Entrada/Saída de dados.
		cout << "Entre com o nome: " << endl;
		cin.getline(cadastro[i].nome, 50);
		
		//Crítica de Dados para sexo.
		while (cadastro[i].sexo != 1 && cadastro[i].sexo != 2)
		{

			cout << "Entre com o sexo: " << endl;
			cin >> cadastro[i].sexo;
		}

		cin.ignore();
		
		//Crítica de Dados para estado civil.
		while (cadastro[i].civil != 'C' && cadastro[i].civil != 'S' && cadastro[i].civil != 'V' && cadastro[i].civil != 'D')
		{

			cout << "Entre com o estado civil: " << endl;
			cin >> cadastro[i].civil;

		}

		//Entrada/Saída de Dados.
		cout << "Entre com a idade: " << endl;
		cin >> cadastro[i].idade;
		cin.ignore();
		

		if (cadastro[i].civil == 'C')
		{

			cont1++;

		}

		soma = soma + cadastro[i].idade;

		cont++;


		if (cadastro[i].sexo == 1)
		{

			for (int j = 0; j < 5; j++)
			{

				if (cadastro[j].idade > id_maior)
				{

					id_maior = cadastro[j].idade;

				}

			}
		}
	}


	//Saída de Dados.
	cout << "A porcentagem de pessoas casadas é: " << ((cont1 * 100) / cont) * 1.0 << "%" << endl;
	cout << fixed << setprecision(2) << "A idade média da população é: " << soma / 5 << endl;
	cout << "A idade do homem mais velho é: " << id_maior << endl;

	return 0;
	
}//Fim da Função Main.
