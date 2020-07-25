#include <iostream>
#include <fstream>

using namespace std;


int main(){
  ifstream arq("matriz.txt");
  int tam;
  arq>>tam;

  bool simetrico=true;
  
  int matriz[tam][tam];
  
  for (int i=0;i<tam;i++){
    for (int j=0;j<tam;j++){
      arq>>matriz[i][j];
    }
  }
  int i=0;
  int j=0;
  while (simetrico and i<tam and j<tam){
    for(j=0;j<tam;j++){
      if (matriz[i][j]!=matriz[j][i]){
        simetrico=false;
      }
    }
    i++;
  }
  
  if (simetrico){
    cout<<"simetrica";
  }
  else{
    cout<<"nao simetrica";
  } 
  
  return 0;
}
