#include <iostream>

using namespace std;

int main(){
	int numero,n1,n2,n3,n4,n5,teste;
	cin>>numero;
	
	teste = numero/100000;
	if (teste != 0)
		cout<<"invalido";
	else{
		n1 = numero/10000;
		numero %= 10000;
		n2 = numero/1000;
		numero %= 1000;
		n3 = numero/100;
		numero %= 100;
		n4 = numero/10;
		numero %= 10;
		n5=numero;
		cout<<n1<<"..."<<n2<<"..."<<n3<<"..."<<n4<<"..."<<n5;
	}
	
	return 0;
}
