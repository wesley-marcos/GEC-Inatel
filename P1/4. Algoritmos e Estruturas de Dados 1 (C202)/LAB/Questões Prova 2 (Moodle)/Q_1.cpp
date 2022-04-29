#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	char x;
	int a, b, y;
	double eq1, eq2;
	
	do {
		
		cin >> x;
	}
	while (x != '@' && x != '#');
	
	cin >> a >> b;

	cout << fixed << setprecision(2);
	
	if (a > 0 && b > 0){

		if (x == '@'){
		
			eq1 = (sqrt(pow(a, 2) + pow(b, 2))) / a;
		
			cout << eq1;
	
		}
	
		else if (x == '#') {
		
			y = 4 * a;
		
			eq2 = (pow(y, 1/3.0)) / (pow(2*b, 2));

			cout << eq2;
		}
	
	}
	else cout << "Impossivel Calcular" <<endl;
	
	return 0;
}
