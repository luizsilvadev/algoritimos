#include <iostream>

using namespace std;

int *soma(int **matriz){
  int *vet=new int [5];
  
  for (int i=0;i<5;i++){
    vet[i]=0;
  }
  
  for (int i=0;i<5;i++){
    for (int j=0;j<5;j++){
      vet[j]+=matriz[i][j];
    }
  }
  
  return vet;
}

int main(){
  int **matriz;
  matriz = new int*[5];
  for (int i=0;i<5;i++){
	matriz[i]=new int[5];
  }
  
  for  (int i=0;i<5;i++){
    for (int j=0;j<5;j++){
      cin>>matriz[i][j];
    }
  }
  
  
  int *vetor=new int [5];
  vetor=soma(matriz);
  
  for (int i=0;i<5;i++){
    cout<<vetor[i]<<" ";
  }
  
  for (int i=0;i<5;i++){
    delete[] matriz[i];
  }
  
  delete[] matriz;
  delete[] vetor;
  matriz=NULL;
  vetor=NULL;
  return 0;
}
