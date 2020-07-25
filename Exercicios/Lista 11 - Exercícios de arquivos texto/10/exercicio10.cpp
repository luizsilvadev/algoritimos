#include <iostream>
#include <fstream>

using namespace std;

int main(){
  ifstream arquivo("entrada.txt");
  int tam;
  int peoesQuePodem=0;
  bool achou=false;
  arquivo>>tam;
  
  int matriz[tam][tam];
  for (int i=0;i<tam;i++){
    for (int j=0;j<tam;j++){
      arquivo>>matriz[i][j];
    }
  }
  
  int i=0,j=0;
  
  for (int k=0;k<tam;k++){
    for (int l=0;l<tam;l++){
      if (matriz[k][l]==1){
        i=k;
        j=l;
        achou=true;
        k=tam+2;
        l=tam+2;
      }
    }
  }

  if (not achou){
    return 0;
  }

  if (matriz[i-1][j-2]==2){
    peoesQuePodem++;
  }
  if (matriz[i-1][j+2]==2){
    peoesQuePodem++;
  }
  if (matriz[i-2][j-1]==2){
    peoesQuePodem++;
  }
  if (matriz[i-2][j+1]==2){
    peoesQuePodem++;
  }
  if (matriz[i+1][j-2]==2){
    peoesQuePodem++;
  }
  if (matriz[i+1][j+2]==2){
    peoesQuePodem++;
  }
  if (matriz[i+2][j-1]==2){
    peoesQuePodem++;
  }
  if (matriz[i+2][j+1]==2){
    peoesQuePodem++;
  }

  cout<<peoesQuePodem;
  
  return 0;
}
