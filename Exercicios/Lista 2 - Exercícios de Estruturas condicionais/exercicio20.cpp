#include <iostream>

using namespace std;

int main(){
	int codigo;
	float salarioAtual,aumento;
	cin>>codigo>>salarioAtual;
	
	if (codigo == 1){
		cout<<"Escriturario"<<endl;
		aumento = salarioAtual*0.5;
	}
	else if (codigo == 2){
		cout<<"Secretario"<<endl;
		aumento = salarioAtual*0.35;
	}
	else if (codigo == 3){
		cout<<"Caixa"<<endl;
		aumento = salarioAtual*0.2;
	}
	else if (codigo == 4){
		cout<<"Gerente"<<endl;
		aumento = salarioAtual*0.1;
	}
	else if (codigo == 5){
		cout<<"Diretor"<<endl;
	}
	
	cout<<aumento<<endl<<salarioAtual+aumento;
	
	return 0;
}
