#include <iostream>
#include <cmath>

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
		swap(vet[menor],vet[i]);
	}
}

int main(){
	int tam;
	cin>>tam;
	int metade=round(float(tam)/2);
	int vet1[metade];
	int vet2[metade-1];
	
	for (int i=0;i<metade;i++){
		cin>>vet1[i];
	}
	
	for(int i=0;i<metade-1;i++){
		cin>>vet2[i];
	}
	
	selection_sort(vet1,metade);
	selection_sort(vet2,metade-1);
	
	for (int i=0;i<metade;i++){
		cout<<vet1[i]<<" ";
	}
	for (int i=metade-2;i>=0;i--){
		cout<<vet2[i]<<" ";
	}
	
	return 0;
}
