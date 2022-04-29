#include <iostream>
#include <iomanip>
#include <locale>
#include <cmath>

using namespace std;

//Função usada para tranformar as coordenadas polares em coordenads retangulares.
void POLAR_RET(double r, double t, double &x, double &y){
	
	double radt;
	
	radt = t * 3.141592/180; //Para converter para radianos.
	
	x = r * cos(radt);
	
	y = r * sin(radt);
	
	return;	
}

//Função Principal.
int main()
{setlocale(LC_ALL, "Portuguese");
	
	double r, t, x, y;
	
	cout << "Entre com o valor de r: " << endl;
	cin >> r;
	
	while (r <= 0){ //Crítica para r > 0
		
		cout << "Entre com o valor de r: " << endl;
		cin >> r;
	}
	
	cout << "Entre com o valor de Teta: " << endl;
	cin >> t;

	POLAR_RET(r, t, x, y);
	
	cout << fixed << setprecision(2);
	cout << "As coordenadas cartesianas são: P(" << x << "," << y << ")" << endl;
	
	return 0;
}