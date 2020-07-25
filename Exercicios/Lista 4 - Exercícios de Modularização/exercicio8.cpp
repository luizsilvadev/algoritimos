#include <iostream>

using namespace std;

float mParaCm(float distancia){
	return distancia * 100;
}

float cmParaM(float distancia){
	return distancia/100;
}

int main(){
	float d;
	string unidade;
	cin>>d>>unidade;
	if (unidade == "centimetro"){
		cout<<mParaCm(d)<<" "<<"cm";
	}
	else if (unidade == "metro"){
		cout<<cmParaM(d)<<" "<<"m";
	}
	else{
		cout<<"ERRO";
	}
	return 0;
}
