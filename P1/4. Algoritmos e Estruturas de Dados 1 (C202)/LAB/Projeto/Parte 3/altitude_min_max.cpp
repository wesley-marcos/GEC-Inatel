#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
	
	double alt, maior=0, menor;
	
	cin >> alt;
	
	menor = alt;
	
	while (alt > 0){
		
		cin >> alt;
		
		if (alt > 0){
			
			if (alt > maior){
				maior = alt;
			}
			
			if (alt < menor){
				menor = alt;
			}
			
		}
	
		alt ++;
	}
	
	cout << fixed << setprecision (2);
	cout << "Maior altitude: " << maior <<endl;
	cout << "Menor altitude: " << menor <<endl;
	
	return 0;
}