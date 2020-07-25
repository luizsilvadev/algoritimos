#include <iostream>

using namespace std;

void piramide(int n){
	int cont=1;
	while (cont<=n){
		cout<<cont<<" ";
		cont++;
	}
	cout<<endl;
}

int main(){
	int cont=1,numero;
	cin>>numero;
	while (cont<=numero){
		piramide(cont);
		cont++;
	}
	
	return 0;
}
