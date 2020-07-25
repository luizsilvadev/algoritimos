#include <iostream>

using namespace std;

int main(){
	float n1,n2;
	char operador;
	cin>>n1>>operador>>n2;
	
	if (operador == '+')
		cout<<n1+n2;
	else if (operador == '-')
		cout<<n1-n2;
	else if (operador == '*')
		cout<<n1*n2;
	else if (operador == '/'){
		if (n2 == 0)
			cout<<"erro";
		else 
			cout<<n1/n2;
	}
	
	return 0;
}
