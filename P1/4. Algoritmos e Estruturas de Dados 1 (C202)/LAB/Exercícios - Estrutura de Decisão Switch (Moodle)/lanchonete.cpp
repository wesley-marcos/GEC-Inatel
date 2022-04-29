#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int C, Q;
	
	cin >> C >> Q;
	
	switch (C)
	{
		case 1: cout << fixed << setprecision(2) << "Total: R$ " << Q * 3.00 <<endl;
		break;
	
		case 2: cout << fixed << setprecision(2) << "Total: R$ " << Q * 5.50 <<endl;
		break;
	
		case 3: cout << fixed << setprecision(2) << "Total: R$ " << Q * 6.00 <<endl;
		break;
	
		case 4: cout << fixed << setprecision(2) << "Total: R$ " << Q * 3.00 <<endl;
		break;
	
		case 5: cout << fixed << setprecision(2) << "Total: R$ " << Q * 2.50 <<endl;
		break;
			
	}
	
	return 0;
}