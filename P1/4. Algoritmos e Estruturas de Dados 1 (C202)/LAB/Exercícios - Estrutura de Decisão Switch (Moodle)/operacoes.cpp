#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main ()
{
	float X, Y;
	char C;
	
	cin >> C;
	
	cin >> X >> Y;
	
	switch (C)
	{
		case '+': cout << fixed << setprecision(1) << (pow(Y, 2)) + 2 <<endl;
		break;
		
		case '-': cout << fixed << setprecision(1) << X - Y <<endl;
		break;
		
		case '*': cout << fixed << setprecision(1) << 2 * (X - Y) <<endl;
		break;
	
		case '/': cout << fixed << setprecision(1) << X / 5 <<endl;
		break;
		
		
	}
	
	return 0;
}