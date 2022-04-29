#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	
	float a, b, c;
	double result;
	
	cin >> a >> b >> c;
	
	result = (a + b + c)/3;
	
	cout << fixed << setprecision (1) <<endl;
	cout << result;
	
	return 0;	
}