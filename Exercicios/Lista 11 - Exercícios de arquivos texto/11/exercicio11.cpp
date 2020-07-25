#include <iostream>
#include <fstream>

using namespace std;

int main(){
  ifstream palavras("palavras.txt");
  ifstream numeros("numeros.txt");
  ofstream frase("frase.txt");
  
  string palavrasvet[50]={""};
  int numerosvet[50]={-1};
  
  
  int i=0;
  while(palavras>>palavrasvet[i]){
    i++;
  }
  i=0;
  while (numeros>>numerosvet[i]){
    i++;
  }
  
  for (int i=0;i<50;i++){
    if (numerosvet[i]!=-1){
      frase<<palavrasvet[numerosvet[i]-1]<<" ";
    }
  }
  
  return 0;
}
