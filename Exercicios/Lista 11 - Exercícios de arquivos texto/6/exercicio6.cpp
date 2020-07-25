#include <iostream>
#include <fstream>

using namespace std;

int main(){
  string veta[100];
  string vetb[100];
  
  ifstream arqa("arquivoA.txt");
  ifstream arqb("arquivoB.txt");
  ofstream arqc("arquivoC.txt");
  
  int i=0;
  while (arqa>>veta[i]){
    i++;
  }
  i=0;
  while (arqb>>vetb[i]){
    i++;
  }
  
  for (i=0;i<100;i++){
    arqc<<veta[i]<<" ";
    arqc<<vetb[i]<<" ";
  }
  
  return 0;
}
