#include <iostream>
#include <fstream>

using namespace std;

int main(){
  string nomearq;
  cin>>nomearq;
  
  ifstream arquivo(nomearq);
  
  string a;
  arquivo>>a;
  
  cout<<a;
  
  return 0;
}
