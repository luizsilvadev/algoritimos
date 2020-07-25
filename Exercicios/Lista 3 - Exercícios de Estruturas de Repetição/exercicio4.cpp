#include <iostream>
using namespace std;

int main(){
	int nA=0,nB=0,cont=0;
	char letra;
	
	while (cont<10){
		cin>>letra;
		if (letra == 'a')
			nA++;
		
		else if (letra == 'b')
			nB++;
		
		cont++;
	}
	
	if (nA < nB)
		cout<<1;
	
	else
		cout<<0;
	
	return 0;
}
