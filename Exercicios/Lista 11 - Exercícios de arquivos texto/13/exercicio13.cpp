#include <iostream>
#include <fstream>

using namespace std;

int main(){
  ifstream entrada("entrada.txt");
  int matriz[3][3];
  int ganhador=0;
  
  for (int i=0;i<3;i++){
    for (int j=0;j<3;j++){
      entrada>>matriz[i][j];
    }
  }
  
  for (int i=0;i<3;i++){
    if (matriz[i][1]==matriz[i][0] and matriz[i][2]==matriz[i][0] and matriz[i][0]!=0){
      ganhador=matriz[i][0];
    }
  }
  for (int j=0;j<3;j++){
    if (matriz[1][j]==matriz[0][j] and matriz[2][j]==matriz[0][j] and matriz[0][j]!=0){
      ganhador=matriz[0][j];
    }
  }
  if (matriz[0][0]==matriz[1][1] and matriz[1][1]==matriz[2][2] and matriz[0][0]!=0){
    ganhador=matriz[0][0];
  }
  if (matriz[2][0]==matriz[1][1] and matriz[1][1]==matriz[0][2] and matriz[1][1]!=0){
    ganhador=matriz[1][1];
  }
  
  cout<<ganhador;
  
  return 0;
}
