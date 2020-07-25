#include <iostream>
using namespace std;

int main(){
	int idade;
	cin>>idade;
	if (idade<5)
		cout<<"Nao registrado";
	else if (idade>=5 and idade <= 7)
		cout<<"Infantil";
	else if (idade >=8 and idade <= 10)
		cout<<"Juvenil";
	else if (idade >=11 and idade<= 15)
		cout<<"Adolescente";
	else if (idade >= 16 and idade <= 30)
		cout<<"Adulto";
	else 
		cout<<"Senior";
	return 0;
}

