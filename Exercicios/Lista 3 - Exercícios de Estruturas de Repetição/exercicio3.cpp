#include <iostream>
using namespace std;

int main(){
	int n,nAntes;
	int cont = 1;
	bool sequencia=true;

	cin>>n;
	nAntes=n;
	while(cont<5){
		if (n<nAntes)
			sequencia =false;
		nAntes=n;
		cin>>n;
		cont++;
	}
	
	if (sequencia)
		cout<<1;
	else
		cout<<0;
	
	return 0;
}
