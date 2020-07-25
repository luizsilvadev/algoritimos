#include <iostream>
#include <fstream>

using namespace std;

void selectionSort(char vet[], int tam){
  for (int i=0;i<tam-1;i++){
    int menor=i;
    for (int j=i+1;j<tam;j++){
      if (vet[j]<vet[menor]){
        menor=j;
      }
    }
    swap(vet[menor],vet[i]);
  }
}

int main(){
  ifstream entrada("entrada.txt");
  ofstream saida("saida.txt");
  
  char alfabeto[26];
  
  int i=0;
  while (entrada>>alfabeto[i]){
    i++;
  }
  
  selectionSort(alfabeto,i);
  
  for(int j=0;j<i;j++){
    saida<<alfabeto[j]<<" ";
  }
  
  return 0;
}
