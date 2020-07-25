#include <iostream>
using namespace std;

int main(){
    int dia,hora,minuto,duracao,duracaodias,duracaohoras;
    cin>>dia>>hora>>minuto>>duracao;
    
    duracaodias=(duracao/60)/24;
    duracao = duracao - duracaodias*60*24;
    duracaohoras=duracao/60;
    duracao = duracao - duracaohoras*60;
    
	dia += duracaodias;
	hora += duracaohoras;
	minuto += duracao;
	
	if (minuto>=60){
		hora += minuto/60;
		minuto %= 60;
	}
	if (hora>=24){
		dia += hora/24;
		hora %= 24;
	}
	
	cout<<dia<<" "<<hora<<" "<<minuto;
	
	return 0;
}
	
