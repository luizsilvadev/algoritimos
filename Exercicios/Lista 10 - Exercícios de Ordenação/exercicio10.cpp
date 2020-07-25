#include <iostream>

using namespace std;

void selection_sort(float vet[],int tam){
	int menor;
	for (int i=0;i<tam-1;i++){
		menor=i;
		for(int j=i+1;j<tam;j++){
			if (vet[j]<vet[menor]){
				menor=j;
			}
		}
		swap(vet[menor],vet[i]);
	}
}

int main(){
	float vet[20];
	int tam=0;
	for (int i=0;i<20;i++){
		cin>>vet[i];
		if (vet[i]<0){
			i+=21;
		}
		else{
			tam++;
		}
	}
	
	selection_sort(vet,tam);
	
	if (tam%2==0){
		cout<<(vet[(tam/2)-1]+vet[tam/2])/2;
	}
	else{
		cout<<vet[tam/2];
	}
	
	return 0;
}
