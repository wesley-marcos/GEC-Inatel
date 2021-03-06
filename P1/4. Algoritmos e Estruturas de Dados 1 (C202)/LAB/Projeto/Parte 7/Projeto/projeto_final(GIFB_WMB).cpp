#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

//Distancia entre dois pontos;

struct ent
{
	double latitude, longitude, elevacao;
	int hora, min, seg;
} atual, anterior;


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

//Convers?o dos dados de entrada (hora, min, seg) para segundos.
int conversao_seg(int h, int m, int s)
{

	int Ts;

	Ts = (h * 3600) + (m * 60) + (s);

	return Ts;
}

//Convers?o de segundos para formato cronol?gico.
void conversao_hms(int T, int &h, int &m, int &s)
{
	int m1;

	h = T / 3600;
	m1 = (T - (h * 3600));
	m = m1 / 60;
	s = m1 - (m * 60);
}

//C?lculo da Velocidade dos Pontos.
double velocidade(double d, int s)
{
	double vel;

	vel = d / (s / 3600.0);

	return vel;
}

//Fun??o Principal.
int main()
{
	double latitude, longitude, antlatitude, antlongitude, d, elevacao, antelevacao, maiorA = -9999, menorA = 999999;
	double ganho = 0, perda = 0, anth, antm, ants, antseg, dtotal = 0, T, So, maior = 0, tempo;
	int i = 0, hora, min, seg, segundos, s, somaSeg = 0, Th, Tm, Ts;

	ifstream entrada;

	entrada.open("entrada.txt", ifstream::in);

	ofstream arquivo;

	entrada >> atual.latitude >> atual.longitude;

	arquivo.open("dados.txt", ofstream::out);

	while (atual.longitude != -00.000000)
	{

		if (i == 0)
		{

			anterior.latitude = atual.latitude;
			anterior.longitude = atual.longitude;
		}

		else
		{

			d = distancia(atual.latitude, atual.longitude, anterior.latitude, anterior.longitude);
			dtotal = dtotal + d;
		}

		entrada >> atual.elevacao;

		if (atual.elevacao > maiorA)
		{
			maiorA = atual.elevacao;
		}

		if (atual.elevacao < menorA)
		{
			menorA = atual.elevacao;
		}


		if (i == 0)
		{

			anterior.elevacao = atual.elevacao;
		}

		else
		{
			if (anterior.elevacao < atual.elevacao)
			{

				ganho = ganho + (atual.elevacao - anterior.elevacao);
			}
			if (anterior.elevacao > atual.elevacao)
			{

				perda = perda + (atual.elevacao - anterior.elevacao);
			}

			anterior.elevacao = atual.elevacao;
		}

		entrada >> atual.hora >> atual.min >> atual.seg;

		if (i == 0)
		{
			anterior.hora = atual.hora;
			anterior.min = atual.min;
			anterior.seg = atual.seg;
		}

		else
		{
			anterior.seg = conversao_seg(anterior.hora, anterior.min, anterior.seg);

			segundos = conversao_seg(atual.hora, atual.min, atual.seg);

			s = segundos - anterior.seg;

			somaSeg = somaSeg + s;

			tempo = velocidade(d, s);

			if (tempo > maior)
			{

				maior = tempo;
			}

		}


		anterior.latitude = atual.latitude;
		anterior.longitude = atual.longitude;
		anterior.hora = atual.hora;
		anterior.min = atual.min;
		anterior.seg = atual.seg;

		entrada >> atual.latitude >> atual.longitude;



		i++;
	}
	entrada.close();
	
	arquivo << fixed << setprecision(2);
	arquivo << "Distancia total: " << dtotal << " Km" << endl;

	conversao_hms(somaSeg, Th, Tm, Ts);

	arquivo << "Tempo total decorrido: " << Th << ":" << Tm << ":" << Ts << endl;

	So = somaSeg / 3600.0;

	T = dtotal / So;

	arquivo << "Velocidade maxima: " << maior << " km/h" << endl;

	arquivo << fixed << setprecision(2);
	arquivo << "Velocidade media: " << T << " Km/h" << endl;

	arquivo << "Ganho de elevacao: " << ganho << " m" << endl;

	arquivo << "Perda de elevacao: " << perda << " m" << endl;

	arquivo << "Maior altitude: " << maiorA << " m" << endl;

	arquivo << "Menor altitude: " << menorA << " m" << endl;

	arquivo.close();

	return 0;
	
}
	/* Feito por:
	
	- Gabriel Ilian Fonseca Barboza, GES, matr?cula: 09;
	- Wesley Marcos Borges, GES, matr?cula: 03;
	
	*/
	
