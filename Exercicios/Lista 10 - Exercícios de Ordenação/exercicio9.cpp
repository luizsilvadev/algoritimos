#include <iostream>

using namespace std;

void insertionSort(int vet[],int tam){
  for (int i=1;i<tam;i++){
    int pivo=vet[i];
    int j=i-1;
    while (j>=0 and pivo<vet[j]){
      vet[j+1]=vet[j];
      j--;
    }
    vet[j+1]=pivo;
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
  
  insertionSort(vet,tam);
  
  return 0;
}
