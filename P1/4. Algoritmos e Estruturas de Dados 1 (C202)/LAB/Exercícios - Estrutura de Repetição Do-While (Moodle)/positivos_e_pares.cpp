#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main (){
	
	int num, maior=0;
	
	do {
		
		cin >> num;
	}
	while (num <= 0);
	
	do {
		
		cin >> num;
	}
	while (num % 2 != 0);
	
	
	for (int i = 1; i < 10; i++){
		
		cin >> num;
		
		if (num > maior){
			maior = num;
		}
	}
	
	cout << maior;
	
	return 0;
}