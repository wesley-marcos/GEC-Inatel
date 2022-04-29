#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main ()
{
	double num, media, soma = 0, cont=0;
	
	cin >> num;
	
	soma = num;
	
	while ( num >= 0){
		
		cont++;
		
		cin >> num;
		
		if (num > 0){
			
		soma = soma + num;
		
		}
	}
	
	media = soma / cont;
	
	cout << fixed << setprecision (2);
	cout << media;
	
	return 0;
}