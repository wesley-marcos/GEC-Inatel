#include <iostream>
#include <iomanip>
#include <locale>
#include <cmath>

using namespace std;

int main(){setlocale(LC_ALL, "Portuguese");
	
	struct cad{
		
		char nome[20], gr;
		double sal, grat;
		int id;
	};

	struct cad regis[100];
	int flag, i = 0;

	while(flag != 2){
		
		cout << "Digite seu nome: " << endl;
		cin.getline(regis[i].nome, 20);

		cout << "Digite seu salário: " << endl;
		cin >> regis[i].sal;

		cout << "Digite sua idade: " << endl;
		cin >> regis[i].id;

		cout << "Digite seu grupo de risco (A ou B): " << endl;
		cin >> regis[i].gr;

		cout << "Deseja cadastrar mais alguem? (Digite 1 para SIM e 2 para NAO)" << endl;
		cin >> flag;

		cin.ignore();

		i++;
	}

	for(int j = 0; j < i; j++)
	{
		if(regis[j].id >= 16 && regis[j].id <= 30 && regis[j].gr == 'A'){
			
			cout << regis[j].nome << endl;
			regis[j].grat = ((regis[j].sal * 7.5) / 100);
			cout << "Sua gratificação é: " << regis[j].grat << " R$" << endl;
		}

		else if(regis[j].id >= 16 && regis[j].id <= 30 && regis[j].gr == 'B'){
			
			cout << regis[j].nome << endl;
			regis[j].grat = ((regis[j].sal * 1.5) / 100);
			cout << "Sua gratificação é: " << regis[j].grat << " R$" << endl;
		}

		else if(regis[j].id >= 31 && regis[j].id <= 60 && regis[j].gr == 'A'){
			
			cout << regis[j].nome << endl;
			regis[j].grat = ((regis[j].sal * 15) / 100);
			cout << "SSua gratificação é: " << regis[j].grat << " R$" << endl;
		}

		else if(regis[j].id >= 31 && regis[j].id <= 60 && regis[j].gr == 'B'){
			
			cout << regis[j].nome << endl;
			regis[j].grat = ((regis[j].sal * 7.5) / 100);
			cout << "Sua gratificação é: " << regis[j].grat << " R$" << endl;
		}

		else{
			
			cout << regis[j].nome << endl;
			cout << "Sem gratificação!!" << endl;
		}
		
		cout << endl;
	}

	return 0;
}
