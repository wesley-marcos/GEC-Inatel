#include <iostream>

using namespace std;

int main (){
	
	int m, n, aux=0, i;
	
	cin >> m >> n;
		
	for (i = m; i <= n; i++){
		
		if (i % 3 == 0 && i%2==0){
		cout << i << endl;
		aux = 1;
		}
	}
	if (aux == 0)
		cout << "-" <<endl;
	
	
	return 0;
}