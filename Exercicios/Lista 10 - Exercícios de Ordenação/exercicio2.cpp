#include <iostream>

using namespace std;

void selection_sort(int vet[],int tam){
	int maior;
	for (int i=tam-1;i>0;i--){
		maior=i;
		for (int j=i-1;j>=0;j--){
			if (vet[j]>vet[maior]){
				maior=j;
			}
		}
		swap(vet[i],vet[maior]);
		for (int k=0;k<tam;k++){
			cout<<vet[k]<<" ";
		}
		cout<<endl;
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
	
	return 0;
}

