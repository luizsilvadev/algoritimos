#include <iostream>

using namespace std;

struct Data{
	int dia;
	int mes;
	int ano;
};

struct Animal{
	int identif;
	string nome;
	string dono;
	Data data;
};

int binaria(Animal vetor[], int busca, int inicio, int fim, int &aux2, bool &encontrou){
	if (inicio <= fim){
		int meio = (inicio + fim)/2;
		if (vetor[meio].identif == busca){
			encontrou = true;
			return aux2 = meio; 
		}
		else if (vetor[meio].identif > busca){
			fim = meio - 1;
		}
		else{
			inicio = meio + 1;
		}
		return binaria(vetor, busca, inicio, fim, aux2, encontrou);
	}
	else
		return 0;
}

int main()
{  
	Animal vetor[100];
	int i = 0;
	int aux = 1;
	int n = 0;
	while(aux != 0){
		cin >> vetor[i].identif;
		if(vetor[i].identif != 0){
		cin >> vetor[i].nome;
		cin >> vetor[i].dono;
		cin >> vetor[i].data.dia;
		cin >> vetor[i].data.mes;
		cin >> vetor[i].data.ano;
		aux = vetor[i].identif;
		i++;
		n++; 
		} else {
			aux = 0;
		}
	}
	int busca;
	int aux2 = 0;
	bool encontrou;
	cin >> busca;
	binaria(vetor, busca, 0, n-1, aux2, encontrou);
	if(encontrou == true){
	cout << vetor[aux2].nome << " " << vetor[aux2].data.dia << "/" <<  vetor[aux2].data.mes
		 << "/" << vetor[aux2].data.ano;
	} else {
		cout << "inexistente";
	}
	    return 0;
}
