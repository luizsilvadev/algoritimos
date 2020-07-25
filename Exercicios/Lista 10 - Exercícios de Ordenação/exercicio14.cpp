#include <iostream>

using namespace std;

void insertionSort(int vet[],int ordem[],int tam){
  for (int i=1;i<tam;i++){
    int j=i-1;
    int pivo = vet[i];
    int indPivo=ordem[i];
    while (j>=0 and pivo<vet[j]){
      vet[j+1]=vet[j];
      ordem[j+1]=ordem[j];
      j--;
    }
    vet[j+1]=pivo;
    ordem[j+1]=indPivo;
  }
}

int main(){
  int jogadores,rodadas;
  cin>>jogadores>>rodadas;
  
  int pontos[jogadores][rodadas];
  
  int soma[jogadores]={0};
  int lista[jogadores];
  
  for (int i=0;i<rodadas;i++){
    for (int j=0;j<jogadores;j++){
      cin>>pontos[i][j];
      soma[j]+=pontos[i][j];
      lista[j]=j+1;
    }
  }
  
  insertionSort(soma,lista,jogadores);
  
  for (int i=jogadores-1;i>=0;i--){
    cout<<lista[i]<<endl;
  }
  
  return 0;
}
