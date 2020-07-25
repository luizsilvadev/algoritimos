#include <iostream>

using namespace std;

void bubbleSort(float vet[],int tam){
  for (int i=tam-1;i>=0;i--){
    for (int j=0;j<i;j++){
      if (vet[j]>vet[j+1]){
        swap(vet[j],vet[j+1]);
      }
    }
  }
}  

int main(){
  int tam;
  cin>>tam;
  float vet[tam];
  
  for (int i=0;i<tam;i++){
    cin>>vet[i];
  }
  
  bubbleSort(vet,tam);
  
  for (int i=0;i<tam;i++){
    cout<<vet[i]<<"   ";
  }
  
  return 0;
}
