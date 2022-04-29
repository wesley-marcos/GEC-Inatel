#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main (){
	
	char S, N, A, resp;
	
	cin >> resp;
	
	if (resp == 'S')
	{
		
		cin >> resp;
	
		if (resp == 'S')
		{
			
			cin >> resp;
		
			if (resp == 'S')
			{
				cout << "Capita Marvel" <<endl;
			}
			
			else if (resp == 'N')
			{
				
			cout << "Thor" <<endl;
			}
		}
				
         if (resp == 'N') {
			 
			 cin >> resp;
		 
		 	if (resp == 'A')
		 		
		 		cout << "Homem de Ferro" <<endl; 
		 }
	}
	
	else {
		
		cin >> resp;
		
		if (resp == 'N'){
			
			cout << "Loki" <<endl;
		}
		
		else {
			
			cin >> resp;
			
			if (resp == 'S'){
				
				cout << "Hulk" <<endl;
			}
			
			else {
				
				cout << "Capitao America" <<endl;
			}
		}
	}
	return 0;
}