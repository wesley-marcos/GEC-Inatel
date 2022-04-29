	#include <iostream>
	#include <cmath>
	#include <iomanip>
	
	using namespace std;
	
	int main ()
	{
	
		char nome[50], curso, esc;
		float nota;
		int matricula;
	
		do
		{
			
			
			do {
				
				cin >> esc;
			}
			while(esc != 'S' && esc != 'N');
	
		   	do
			{
	
				cin >> nota;
		
			}
			while(nota < 0 || nota > 100);
	
			cin.ignore();
	
			cin.getline(nome, 50);
	
			cin >> matricula;
			
			cin.ignore();
	
			do
			{
	
				cin >> curso;
			}
			while (curso != 'A' && curso != 'B' && curso != 'C');
			
			if (esc == 'S'){
				if (nota >= 30 && nota < 60)
		
					cout << "NP3!" << endl;
		
				if (nota >= 60)
		
					cout << "Aprovado!" << endl;
		
				if (nota < 30)
				
					cout << "Reprovado!" << endl;
		}
		}
		while(esc != 'N');
	
		return 0;
	}
