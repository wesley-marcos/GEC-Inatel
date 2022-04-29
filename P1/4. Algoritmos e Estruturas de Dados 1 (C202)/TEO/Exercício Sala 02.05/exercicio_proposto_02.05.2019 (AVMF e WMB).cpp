#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>
#include <locale>

using namespace std;

int main()
{setlocale(LC_ALL, "Portuguese"); //Habilita uso da língua portuguesa.
	
	//Declaração de Variáveis.
	int i, j;
	char cidade[41], mes[13][10]; 
	double temp[13], maior_temp, menor_temp, soma_temp = 0;

	//Entrada de Dados.
	cout << "Digite o nome da cidade: " << endl;
	cin.getline(cidade, 41);

	//Estrutura de Repetição para entrada dos meses e suas respectivas temperaturas.
	for (i = 0; i < 12; i++)
	{
		cout << "Digite o nome do mês: " << endl;
		cin.getline(mes[i], 10);


		cout << "Digite a temperatura: " << endl;
		cin >> temp[i];

		cin.ignore();

		soma_temp = soma_temp + temp[i];

	}
	
	//Declaração de maior e menor temperatura.
	maior_temp = temp[0];
	menor_temp = temp[0];
	
	//Estrutura de Repetição para cálculo de maior e menor temperatura. 
	for(j = 1; j < 12; j++)
	{
		if(temp[j] > maior_temp)
			maior_temp = temp[j];

		if (temp[j] < menor_temp)
			menor_temp = temp[j];

	}

	//Saída de Dados.
	cout << "Maior temperatura: " << maior_temp << endl;
	cout << "Mês(es) que teve a maior temperatura: ";

	//Estrutura de Repetição para mostrar qual mês com a maior temperatura.
	for(i = 0; i < 12; i++)
	{
		if(temp[i] == maior_temp)
		{

			cout << mes[i] << "\t";


		}
	}

	//Saída de Dados.
	cout << endl;
	cout << "Menor temperatura: " << menor_temp << endl;
	cout << "Mês(es) que teve a menor temperatura: " <<endl;

	//Estrutura de Repetição para mostrar qual mês com a menor temperatura.
	for(i = 0; i < 12; i++)
	{
		if(temp[i] == menor_temp)
			cout << mes[i] << "\t";
	}
	
	//Saída de Dados.
	cout << endl;
	cout << "Temperatura média anual: " << soma_temp / 12 << endl;
	cout << "Mês (es) com temperatura maior que a temperatura média anual: " << endl;

	//Estrutura de Repetição para mostrar quais temperaturas estão acima da media anual.
	for(i = 0; i < 12; i++)
	{
		if(temp[i] > soma_temp / 12)
		{

			cout << mes[i] << "\t";


		}
	}
	
	//Saída de Dados.
	cout << endl;
	cout << "Mês (es) com temperatura menor que a temperatura média anual: " << endl;

	//Estrutura de Repetição para mostrar quais temperaturas estão abaixo da media anual.
	for(i = 0; i < 12; i++)
	{
		if(temp[i] < soma_temp / 12)
		{
			
			cout << mes[i] << "\t";
			
		}
	}
	
	cout << endl;


	return 0;
}//Fim do Código
