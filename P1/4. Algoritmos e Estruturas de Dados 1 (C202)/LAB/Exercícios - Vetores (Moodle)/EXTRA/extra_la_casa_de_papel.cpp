#include <iostream>
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	int votos;
	
	do{
		
		cin >> votos;
			
	} while(! (votos > 0 && votos < 1000));
	
	int pessoas[votos], cont1 = 0, cont2 = 0;

	for(int i = 0; i < votos; i++){
		
		do{
			
        cin >> pessoas[i];
        
		} while(!(pessoas[i] != 1 || pessoas[i] != -1));

		if(pessoas[i] == 1){
			
			cont1++;
		}
		if (pessoas[i] == -1){
			
			cont2++;
		}
	}
	
	if(cont1 > cont2){
		
		cout << "A maioria gostou!" << endl;
	}
	
	if(cont2 > cont1){
		
		cout << "A maioria nao gostou!" << endl;
	}
	
	if(cont1 == cont2){
		
		cout << "Empate!" << endl;
	}
	
	return 0;
}
