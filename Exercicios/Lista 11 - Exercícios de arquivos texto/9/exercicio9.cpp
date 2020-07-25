#include <iostream>
#include <fstream>

using namespace std;

int main(){
  string nomeArq,busca;
  string palavraAtual;
  int aparecimentos=0;
  
  cin>>nomeArq>>busca;
  
  ifstream arquivo(nomeArq);
  
  while (arquivo>>palavraAtual){
    if (palavraAtual==busca){
      aparecimentos++;
    }
  }

  cout<<aparecimentos;
  
  return 0;
}
