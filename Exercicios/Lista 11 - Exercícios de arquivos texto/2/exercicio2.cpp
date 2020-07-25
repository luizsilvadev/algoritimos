#include <iostream>
#include <fstream>

using namespace std;

int main(){
  string nomearq,palavra;
  cin>>nomearq>>palavra;
  
  ofstream arquivo(nomearq);
  
  string a;
  arquivo<<palavra;
  
  return 0;
}

