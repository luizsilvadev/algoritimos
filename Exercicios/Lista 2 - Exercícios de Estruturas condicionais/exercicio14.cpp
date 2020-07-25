#include <iostream>

using namespace std;

int main(){
	int preco;
	cin>>preco;

	if (preco<=20000)
		cout<<preco*1.05;
	else if (preco>20000 and preco<=40000)
		cout<<preco*1.1*1.3;
	else if (preco>40000)
		cout<<preco*1.15*1.45;
	
	return 0;
}
