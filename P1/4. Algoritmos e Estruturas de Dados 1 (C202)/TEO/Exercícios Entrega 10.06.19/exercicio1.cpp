#include <iostream>
#include <iomanip>
#include <locale>
#include <cmath>

using namespace std;

double fat(int e){
	
	int f = 1;

	for(int i = e; i > 0; i--){
		
		f = f * i;
	}

	return f;
}

double seno(double x){
	
	double S = 0;
	int e = 1, si = 1;

	for(int i = 0; i < 5; i++){
		
		S = S + (pow(x, e) / fat(e) * si);
		e = e + 2;
		si = si * -1;
	}

	return S;
}

int main(){setlocale(LC_ALL, "Portuguese");
	
	double x;

	cout << "Entre com o valor de x: " << endl;
	cin >> x;

	cout << "O seno de " << x << " é " << seno(x);

	return 0;
}
