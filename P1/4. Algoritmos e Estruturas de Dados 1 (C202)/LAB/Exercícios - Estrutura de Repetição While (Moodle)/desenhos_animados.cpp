#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main ()
{

	int idade, 	desenho, naruto = 0, avatar = 0, simp = 0, bob = 0, jackie = 0, homem = 0, mulher = 0, bebe = 0, bebe2 = 0, maior = 0, total;
	char sexo, escolha;
	double porcentagem;

	cin >> escolha;
	total++;

	if (escolha != 'N')
	{

		while (escolha != 'N')
		{

			cin >> desenho;

			if (desenho > 0	&& desenho <= 5){

					if (desenho == 1 || desenho > maior){

						naruto++;
						maior = desenho;
					}

					else if (desenho == 2 || desenho > maior){

						avatar++;
						maior = desenho;
					}

					else if (desenho == 3 || desenho > maior){

					   	simp++;
					   	maior = desenho;
					}

					else if (desenho == 4 || desenho > maior){

					   	bob++;
					   	maior = desenho;
					}

					else if (desenho == 5 || desenho > maior){

					   	jackie++;
					   	maior = desenho;
					}
			}  

			cin >> sexo;

			if (sexo == 'M' || sexo == 'F')
			{

				if (sexo == 'M')
				{

					homem++;
				}

				else if (sexo == 'F')
				{

					mulher++;
				}
			}

			cin >> idade;

			if (sexo == 'M' && idade < 30 && desenho == 4)
			{

				if (sexo == 'M' && idade < 30 && desenho == 4)
				{

					bebe++;

					porcentagem = (bebe * (100 * 1.0)) / total;
				}
			}

			if (sexo == 'F' && desenho == 1)
			{

				if (sexo == 'F' && desenho == 1)
				{

					bebe2++;
				}
			}

			cin >> escolha;
			total++;

		}

		cout << fixed << setprecision (2);
		cout << "Desenho que mais marcou: " << desenho + maior << endl;
		cout << "Quant. de mulheres que assistiram Naruto: " << bebe2 << endl;
		cout << "Porcentagem de homens com menos de 30 anos que gostavam de Bob Esponja: " << porcentagem << "%" << endl;
	}

	else cout << "Nenhuma pesquisa foi feita!" << endl;


	return 0;
}
