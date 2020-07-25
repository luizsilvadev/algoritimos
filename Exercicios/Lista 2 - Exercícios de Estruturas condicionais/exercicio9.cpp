#include <iostream>
using namespace std;

int main(){
	float salario;
	cin>>salario;
	
	if (salario<300)
		cout<<0.15*salario<<endl<<1.15*salario;
	else if (salario>=300 and salario<=600)
		cout<<0.10*salario<<endl<<1.1*salario;
	else if (salario>=600 and salario<=900)
		cout<<0.05*salario<<endl<<1.05*salario;
	else if (salario>900)
		cout<<0<<endl<<salario;

	return 0;
}
