#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	int x, y, calc = 1;
	
	cin >> x >> y;
	
	for (int i = 1; i <= y; i++){
		
		calc = calc * x;
	}			
	
	cout << calc << endl;;
	return 0;
}