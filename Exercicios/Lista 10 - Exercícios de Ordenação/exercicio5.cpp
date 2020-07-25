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
		swap(vet[menor],vet[i]);
	}
}

int main(){
	int n;
	cin>>n;
	
	int mat[n][n];
	
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			cin>>mat[i][j];
		}
	}
	
	for (int i=0;i<n;i++){
		selection_sort(mat[i],n);
	}
	
	for (int i=0;i<n;i++){
		if (i%2==0){
			for (int j=0;j<n;j++){
				cout<<mat[i][j]<<" ";
			}
		}
		else{
			for (int j=n-1;j>=0;j--){
				cout<<mat[i][j]<<" ";
			}
		}
		cout<<endl;
	}
	
	return 0;
}

