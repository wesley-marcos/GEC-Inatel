#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
	
	char letra;
	double media, cont=0, consoante=0;
	
	cin >> letra;
	
	if (letra != 'a' && letra != 'e' && letra != 'i' && letra != 'o' && letra != 'u' && letra != '*'){
			
		consoante++;
		
	}

	while (letra != '*'){
		
		cin >> letra;
				
		if (letra != 'a' && letra != 'e' && letra != 'i' && letra != 'o' && letra != 'u' && letra != '*'){
			
			consoante++;
		}
		
		cont++;
	}

	media = consoante / cont;
	
	cout << fixed << setprecision(2);
	cout << media <<endl;
	return 0;
}