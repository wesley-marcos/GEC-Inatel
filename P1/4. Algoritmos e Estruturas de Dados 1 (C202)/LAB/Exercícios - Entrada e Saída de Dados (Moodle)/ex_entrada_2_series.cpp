#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double a, b, c, d, e, f, media1, media2;

	cin >> a >> b >> c >> d >> e >> f;

	media1 = (a + b + c) / 3;
	media2 = (d + e + f) / 3;

	cout << fixed << setprecision(2);
	cout << "Breaking Bad: " << media1 << endl;
	
	cout << fixed << setprecision(2);
	cout << "Prison Break: " << media2 << endl;
	
}
