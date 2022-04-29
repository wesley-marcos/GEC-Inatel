#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	int Hi, Mi, Si, Hf, Mf, Sf, qnt_seg, hora, tempo_hora, tempo_min, tempo_seg;

	cin >> Hi >> Mi >> Si >> Hf >> Mf >> Sf;

	qnt_seg = ((Hf - Hi) * 3600) + ((Mf - Mi) * 60) + (Sf - Si);
	
	cout << qnt_seg << " segundos" << endl;
	
	hora = qnt_seg / 3600;
	
	tempo_hora = (qnt_seg%3600);
	
	tempo_min = (tempo_hora/60);
		
	tempo_seg = qnt_seg - ((hora * 3600) + (tempo_min * 60));
	
	cout << hora << ":" << tempo_min << ":" << tempo_seg;


	return 0;
}
