#include<iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//Distancia entre dois pontos:
double distancia(double lat, double lon, double latant, double longant)
{
	double dist;

	lat = lat * 3.1415926536 / 180;
	lon = lon * 3.1415926536 / 180;
	latant = latant * 3.1415926536 / 180;
	longant = longant * 3.1415926536 / 180;

	dist = 6371 * (acos(sin(latant) * sin(lat) + cos(latant) * cos(lat) * cos(lon - longant)));


	return dist;
}

//Conversão dos dados de entrada (hora, min, seg) para segundos.
int conversao_seg(int h, int m, int s)
{

	int Ts;

	Ts = (h * 3600) + (m * 60) + (s);

	return Ts;
}

//Conversão de segundos para formato cronológico.
void conversao_hms(int T, int &h, int &m, int &s)
{
	int m1;

	h = T / 3600;
	m1 = (T - (h * 3600));
	m = m1 / 60;
	s = m1 - (m * 60);
}

//Cálculo da Velocidade dos Pontos.
double velocidade(double d, int s)
{
	double vel;

	vel = d / (s / 3600.0);

	return vel;
}

//Função Principal.
int main()
{
	double latitude, longitude, antlatitude, antlongitude, d, elevacao, antelevacao, maiorA = -9999, menorA = 999999;
	double ganho = 0, perda = 0, anth, antm, ants, antseg, dtotal = 0, T, So, maior = 0, tempo;
	int i = 0, hora, min, seg, segundos, s, somaSeg = 0, Th, Tm, Ts;

	cin >> latitude >> longitude;

	while (longitude != -00.000000)
	{

		if (i == 0)
		{

			antlatitude = latitude;
			antlongitude = longitude;
		}

		else
		{

			d = distancia(latitude, longitude, antlatitude, antlongitude);
			dtotal = dtotal + d;
		}

		cin >> elevacao;

		if (elevacao > maiorA)
		{
			maiorA = elevacao;
		}

		if (elevacao < menorA)
		{
			menorA = elevacao;
		}


		if (i == 0)
		{

			antelevacao = elevacao;
		}

		else
		{
			if (antelevacao < elevacao)
			{

				ganho = ganho + (elevacao - antelevacao);
			}
			if (antelevacao > elevacao)
			{

				perda = perda + (elevacao - antelevacao);
			}

			antelevacao = elevacao;
		}

		cin >> hora >> min >> seg;

		if (i == 0)
		{
			anth = hora;
			antm = min;
			ants = seg;
		}

		else
		{
			antseg = conversao_seg(anth, antm, ants);

			segundos = conversao_seg(hora, min, seg);

			s = segundos - antseg;

			somaSeg = somaSeg + s;

			tempo = velocidade(d, s);

			if (tempo > maior)
			{

				maior = tempo;
			}

		}


		antlatitude = latitude;
		antlongitude = longitude;
		anth = hora;
		antm = min;
		ants = seg;

		cin >> latitude >> longitude;

		i++;
	}

	cout << fixed << setprecision(2);
	cout << "Distancia total: " << dtotal << " Km" << endl;

	conversao_hms(somaSeg, Th, Tm, Ts);

	cout << "Tempo total decorrido: " << Th << ":" << Tm << ":" << Ts << endl;

	So = somaSeg / 3600.0;

	T = dtotal / So;

	cout << "Velocidade maxima: " << maior << " km/h" << endl;

	cout << fixed << setprecision(2);
	cout << "Velocidade media: " << T << " Km/h" << endl;

	cout << "Ganho de elevacao: " << ganho << " m" << endl;

	cout << "Perda de elevacao: " << perda << " m" << endl;
	
	cout << "Maior altitude: " << maiorA << " m" << endl;
	
	cout << "Menor altitude: " << menorA << " m" << endl;

	return 0;
}
