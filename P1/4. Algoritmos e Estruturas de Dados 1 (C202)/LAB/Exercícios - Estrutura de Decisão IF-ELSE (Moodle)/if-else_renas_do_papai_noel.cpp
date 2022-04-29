#include <iostream>
#include <cmath>

using namespace std;

int main ()
{

	int v1, v2, v3, v4, v5, v6, v7, v8, v9, media;
	cin >> v1 >> v2 >> v3 >> v4 >> v5 >> v6 >> v7 >> v8 >> v9;

	media = (v1 + v2 + v3 + v4 + v5 + v6 + v7 + v8 + v9);
	
	if ( media % 9 == 1){
		
		cout << "Orion" << endl;
	}
	else if ( media % 9 == 2){
		
		cout << "Sonne" << endl;
	}
	else if ( media % 9 == 3){
		
		cout << "Mond" << endl;
	}
	else if ( media % 9 == 4){
		
		cout << "Vixen" << endl;
	}
	else if ( media % 9 == 5){
		
		cout << "Comet" << endl;
	}
	else if ( media % 9 == 6){
		
		cout << "Cupid" << endl;
	}
	else if ( media % 9 == 7){
		
		cout << "Donner" << endl;
	}
	else if ( media % 9 == 8){
		
		cout << "Phoenix" << endl;
	}
	else if ( media % 9 == 9 || media % 9 == 0){
		
		cout << "Andromeda" << endl;
	}
	
return 0;
}
