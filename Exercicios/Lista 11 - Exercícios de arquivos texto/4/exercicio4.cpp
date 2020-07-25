#include <iostream>
#include <fstream>

using namespace std;

ofstream arq("phi.txt");

float phi(int n){
  if (n==1){
    return n;
  }
  else {
    return 1+(1/phi(n-1));
  }
}

int main(){
  int n;
  cin>>n;
  for (int i=1;i<=n;i++){
    arq<<phi(i)<<endl;
  }
  cout<<phi(n);
  
  return 0;
}
