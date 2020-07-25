#include <iostream>
using namespace std;

int main(){
	int dia1,dia2,mes1,mes2,ano1,ano2;
	cin>>dia1>>mes1>>ano1;
	cin>>dia2>>mes2>>ano2;
	if (ano1>ano2)
		cout<<dia1<<" "<<mes1<<" "<<ano1;
	else if (ano2>ano1)
		cout<<dia2<<" "<<mes2<<" "<<ano2;
	else{
		if (mes1>mes2)
			cout<<dia1<<" "<<mes1<<" "<<ano1;
		else if (mes2>mes1)
			cout<<dia2<<" "<<mes2<<" "<<ano2;
		else{
			if (dia1>dia2)
				cout<<dia1<<" "<<mes1<<" "<<ano1;
			else
				cout<<dia2<<" "<<mes2<<" "<<ano2;
		}
	}
	return 0;
}

