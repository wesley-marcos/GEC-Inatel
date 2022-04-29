#include<iostream>

using namespace std;

int main (){
	
	int cont = 0, n, x;
	int cont3;

	cin>>n;
	
	while (cont < n){
		
		cin>>x;
		cont3 = 0;
		for(int cont2 = 1; cont2 <= x; cont2++)
		{
			if(x%cont2 == 0)
			{
				cont3++;
			}
		}
		if(cont3 == 2)
		{
			cout<<x<<" eh primo"<<endl;
		}
		else
		{
			cout<<x<<" nao eh primo"<<endl;
		}
		cont++;
	}
	
	return 0;
}