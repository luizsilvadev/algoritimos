#include <iostream>

using namespace std;

int fib(int n){
	if (n==0)
		return 0;
	else if (n==1)
		return 1;
	else
		return(fib(n-1)+fib(n-2));
}

int main(){
	int numero,cont=0;
	cin>>numero;
	while (cont<numero){
		cout<<fib(cont)<<" ";
		cont++;
	}
	return 0;
}

