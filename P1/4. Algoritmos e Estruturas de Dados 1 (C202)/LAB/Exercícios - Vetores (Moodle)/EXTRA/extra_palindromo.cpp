#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int N;

	do{
		
		cin >> N;
	}
	
	while(!(N > 0 && N < 10));

	int numero[N], i, aux1, aux2;

	for(i = 0; i < N; i++){
		
		cin >> numero[i];
	}

	for(i = 0; i < N; i++){
		
		aux1 = numero[i];
		aux2 = numero[(N - 1) - i];
	}

	if(aux1 == aux2){
		
		cout << "Palindromo!" << endl;
	}
	
	else{
		
		cout << "Nao!" << endl;
	
	}

	return 0;

}
