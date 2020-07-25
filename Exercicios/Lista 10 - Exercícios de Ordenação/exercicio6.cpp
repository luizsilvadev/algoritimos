#include <iostream>

using namespace std;

struct aluno{
	int id,matricula;
};

void selection_sort(aluno vet[],int tam){
	int menor;
	for (int i=0;i<tam-1;i++){
		menor=i;
		for (int j=i+1;j<tam;j++){
			if (vet[j].id<vet[menor].id){
				menor=j;
			}
		}
		swap(vet[i],vet[menor]);
	}
}

int busca_binaria(aluno vet[],int busca,int tam){
	int pos0=0;
	int pos1=tam-1;
	int matricula=0;
	int meio;
	while (pos0<=pos1){
		meio=(pos0+pos1)/2;
		if (busca==vet[meio].id){
			matricula=vet[meio].matricula;
			pos0=pos1+1;
		}
		else{
			if (busca>vet[meio].id){
				pos0=meio+1;
			}
			else{
				pos1=meio-1;
			}
		}
	}
	return matricula;
}

int main(){
	int qntd;
	cin>>qntd;
	
	aluno vet[qntd];
	
	for (int i=0;i<qntd;i++){
		cin>>vet[i].id>>vet[i].matricula;
	}
	
	selection_sort(vet,qntd);

	int buscas[4];
		
	for (int i=0;i<4;i++){
		cin>>buscas[i];
	}
	
	for (int i=0;i<qntd;i++){
		cout<<vet[i].id<<" ";
	}
	
	for (int i=0;i<4;i++){
		cout<<endl<<busca_binaria(vet,buscas[i],qntd);
	}
	
	return 0;
}
