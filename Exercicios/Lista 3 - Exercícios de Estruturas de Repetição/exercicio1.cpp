#include <iostream>
using namespace std;

int main(){
	int quantidadeIngressos,n;
	int cont=0;
	bool deu=false;
	cin>>quantidadeIngressos;
	
	while (cont<=quantidadeIngressos and deu==false){
		cin>>n;
		cont ++;
		if (n==cont){
			cout<<n;
			deu = true;
		}
	}
	
	if (deu==false)
		cout<<0;
	return 0;
}
