#include <iostream>
#include <fstream>

using namespace std;

int main(){
  string arq_entrada,arq_saida,aux="";
  cin>>arq_entrada>>arq_saida;
  
  ifstream arq1(arq_entrada);
  ofstream arq2(arq_saida);
  
  while (arq1>>aux){
    arq2<<aux;
  }
  
  
  return 0;
}
