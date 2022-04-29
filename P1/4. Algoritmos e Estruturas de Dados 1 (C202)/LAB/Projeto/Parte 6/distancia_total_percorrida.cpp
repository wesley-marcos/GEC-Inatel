#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

struct localizacao
{
	double latitude, longitude;
};

int main()
{
	double longi = 0, distan = 1 , lat = 0, PI;

	struct localizacao distancia;


	while(distancia.latitude != -00.000000 && distancia.longitude != -00.000000)
	{

		cin >> distancia.longitude >> distancia.latitude;

		longi = distancia.longitude - longi;

		lat =  distancia.latitude - lat;

		PI = 3.1415926536;

		if(distancia.latitude == -00.000000)
		{

			distan = 6371 * ((acos ((cos(PI)) * ((90 - distancia.longitude) / (180)))) * (cos(((90 - distancia.latitude) * PI) / 180)) + (sin(((90 - distancia.longitude) * PI) / 180)) * (sin(((90 - distancia.latitude) * PI) / 180)) * (cos(((distancia.longitude - distancia.latitude) * PI) / 180)));

			= acos (cos ( RADIANS ( 90 Latitude_1 )) * COS ( RADIANS ( 90 Latitude_2 ) ) + SIN ( RADIANS ( 90 Latitude_1 )) * SIN ( RADIANS ( 90 Latitude_2 )) * COS ( RADIANS ( Longitude_1 - Longitude2 ) ) * SE ( C3 = " Miles " , RadMiles , RadKilom ) 
		}
	}

	cout << fixed << setprecision(2);

	cout << "Distancia total: " << distan << " km" << endl;



	return 0;
}
