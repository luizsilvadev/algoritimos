#include <iostream>
#include <string>
using namespace std;
int main(){
	int cont,n,qntd,marcacoes;
	char letra = '*';
	bool para = false;
	string gabarito = "";
	while (para==false){
		cont=1;
		marcacoes=0;
		cin>>qntd;
		if (qntd==0){
			para = true;
			int max = gabarito.length();
			for (int i=0; i < max; i++){
				cout<<gabarito[i]<<endl;
			}
		}
		while (cont<=qntd){
			marcacoes=0;
			for (int i=0; i < 5; i++){
				cin>>n;
				if (i==0 and n<=127){
					marcacoes += 1;
					letra = 'A';
				}
				else if (i==1 and n<=127){
					marcacoes+=1;
					letra = 'B';
				}
				else if (i==2 and n<=127){
					marcacoes+=1;
					letra = 'C';
				}
				else if (i==3 and n<=127){
					marcacoes+=1;
					letra = 'D';
				}
				else if (i==4 and n<=127){
					marcacoes+=1;
					letra = 'E';
				}
				if (marcacoes!=1){
					letra = '*';
				}
			}
			gabarito += letra;
			cont++;
		}
	}
}
