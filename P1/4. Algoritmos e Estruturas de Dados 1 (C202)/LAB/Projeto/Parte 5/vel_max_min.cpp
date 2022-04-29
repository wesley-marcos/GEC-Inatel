#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstring>

using namespace std;

int main()
{

	int pontos;

	cin >> pontos;

	int horas[pontos], minutos[pontos], segundos[pontos];
	float velocidade[pontos], dist, tempo, distancia[pontos],maior=0,menor=99999;

	
	for(int i = 0; i < pontos; i++){
	
		cin >> horas[i] >> minutos[i] >> segundos[i] >> distancia[i];
		
		if(i != 0)
		{
			tempo = horas[i]*3600 - horas[i - 1]*3600 + minutos[i]*60 - minutos[i - 1]*60 + segundos[i] - segundos[i - 1];
			
			dist = abs(distancia[i] - distancia[i - 1]);
			
			velocidade[i] = dist / tempo;
		}
	}
	
	for(int i = 1; i < pontos; i++){
	
		cout << fixed << setprecision(2);
		cout << velocidade[i] << endl;
		
		if(velocidade[i] > maior){
		
			maior = velocidade[i];
		}
		
		if(velocidade[i] < menor){
		
			menor = velocidade[i];
		}
	}
	
	cout << fixed << setprecision(2);
	cout << "Velocidade Maxima = " << maior << endl;
	cout << "Velocidade Minima = " << menor << endl;
	
	return 0;
}
