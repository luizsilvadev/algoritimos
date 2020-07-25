#include <iostream>

using namespace std;

int particiona(int vet[],int c,int f){
  int i=1;
  int j=f;
  int pivo=vet[c];
  while (i<=j){
    if (vet[i]<=pivo){
      i++;
    }
    else if (vet[j]>=pivo){
      j--;
    }
    else {
      swap(vet[i],vet[j]);
      i++;
      j--;
    }
  }
  vet[c]=vet[j];
  vet[j]=pivo;
  return j;
}

void quickSort(int vet[],int c,int f){
  if (c<f){
    int novoPivo=particiona(vet,c,f);
    quickSort(vet,c,novoPivo-1);
    quickSort(vet,novoPivo+1,f);
  }
}

int main(){
  int tam;
  cin>>tam;
  
  int vet[tam];
  for (int i=0;i<tam;i++){
    cin>>vet[i];
  }
  
  quickSort(vet,0,tam-1);
  
  for (int i=0;i<tam;i++){
    cout<<vet[i]<<" ";
  }
  
  return 0;
}
