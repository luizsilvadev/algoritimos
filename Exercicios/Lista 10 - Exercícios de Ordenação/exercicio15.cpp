#include <iostream>

using namespace std;

void shellSort(int vet[],int tamVet,int gaps[],int tamGaps){
  int posGap=tamGaps-1;
  while (gaps[posGap]>tamVet){
    posGap--;
  }
  
  while (posGap>=0){
    int gap=gaps[posGap];
    
    for (int i=gap;i<tamVet;i++){
      int pivo = vet[i];
      int j=i;
      while (j>=gap and pivo < vet[j-gap]){
        vet[j]=vet[j-gap];
        j=j-gap;
      }
      vet[j]=pivo;
    }
    posGap--;
  }
}  

int main(){
  int tamV,tamG;
  cin>>tamV;
  
  int vet[tamV];
  for (int i=0;i<tamV;i++){
    cin>>vet[i];
  }
  
  cin>>tamG;
  int gaps[tamG];
  
  for (int i=0;i<tamG;i++){
    cin>>gaps[i];
  }
  
  shellSort(vet,tamV,gaps,tamG);
  
  for (int i=0;i<tamV;i++){
    cout<<vet[i]<<" ";
  }
  
  return 0;
}
