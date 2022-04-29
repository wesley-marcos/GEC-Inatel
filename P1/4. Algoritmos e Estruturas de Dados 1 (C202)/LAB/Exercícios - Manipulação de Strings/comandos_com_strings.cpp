#include <iostream>
#include <cmath>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int cod, tam;
	char frase[100], frase1[100];

	do{
		
		cin >> cod;
	}
	
	while(!(cod == 1 || cod == 2 || cod == 3));

	
	if(cod == 1){

		cin.ignore();
		cin.getline(frase, 100);
		cin.getline(frase1, 100);

		if(strcmp(frase1, frase) == 0){
			
			cout << "Iguais" << endl;
		}
		
		else{
			
			cout << "Diferentes" << endl;
		}
	}

	if(cod == 2){
		
		cin >> frase;

		strcpy(frase1, frase);

		cout << frase1 << endl;
	}

	if(cod == 3){
		
		cin.ignore();
		cin.getline(frase, 100);
		tam = strlen(frase);
		cout << tam << endl;

	}

	return 0;
}
