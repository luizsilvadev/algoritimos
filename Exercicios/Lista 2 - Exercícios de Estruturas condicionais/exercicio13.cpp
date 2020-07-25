#include <iostream>

using namespace std;

int main(){
	int codigo,qntd,total;
	float desconto;
	cin>>codigo>>qntd;
	
	if (codigo>=1 and codigo<=10){
		total = 10;
		cout<<10<<endl;
	}
	else if (codigo>=11 and codigo<=20){
		total = 15;
		cout<<15<<endl;
	}
	else if (codigo>=21 and codigo<=30){
		total = 20;
		cout<<20<<endl;
	}
	else if (codigo>=31 and codigo<=40){
		total = 30;
		cout<<30<<endl;
	}
	
	total *= qntd;
	
	if (total<250)
		desconto = float(total)*0.05;
	else if (total>=250 and total <=500)
		desconto = float(total)*0.1;
	else if (total > 500)
		desconto = float(total)*0.15;
	
	cout<<total<<endl<<desconto<<endl<<total-desconto;
	
	return 0;
}	
