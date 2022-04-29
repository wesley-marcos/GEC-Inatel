#include <iostream>
#include <cmath>
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char palavra[100];
	int i, tam;
	
	cin.getline(palavra, 100);
	tam = strlen(palavra);

	for(i = 0; i < tam; i++){
		
		if(i % 2 == 0){
			
			cout << palavra[i];
		}
	}
	
	for(i = 0; i < tam; i++){
		
		if(i % 2 == 1){
			
			cout << palavra[i];
		}
	}

	return 0;
}
