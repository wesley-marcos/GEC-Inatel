#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main (){
	
	int x, y;
	double resp;
	
	cin >> x >> y;
	
	resp = (pow(x * y, 1/5.0) - x) / (pow( y, 5) + 2 * x * y);
	
	cout << fixed << setprecision (3);
	cout << resp;
	
	
	return 0;
}