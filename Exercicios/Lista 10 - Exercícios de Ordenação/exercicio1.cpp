#include <iostream>

using namespace std;

void selection_sort(int vet[],int tam){
	int menor;
	for (int i=0;i<tam-1;i++){
		menor=i;
		for (int j=i+1;j<tam;j++){
			if (vet[j]<vet[menor]){
				menor=j;
			}
		}
		swap(vet[i],vet[menor]);
	}
}

int main(){
	int tam;
	cin>>tam;
	
	int vet[tam];
	for (int i=0;i<tam;i++){
		cin>>vet[i];
	}
	
	selection_sort(vet,tam);
	
	for (int i=0;i<tam;i++){
		cout<<vet[i]<<endl;
	}
	
	return 0;
}
