#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	int N;
	
	cin >> N;
	
	int evidencia[N], i;
	
	for(i = 0; i < N; i++)
	{
		cin >> evidencia[i];
		
		if(evidencia[i] < 0){
			
			evidencia[i] = 0;
		}
	}
	
	for(i = 0; i < N; i++){
		
		cout << evidencia[i] << endl;
	}
	
	
	return 0;
}