#include <iostream>

using namespace std;

struct hidrocarboneto{
  int c,h;
};

int main(){
  hidrocarboneto* ptr=new hidrocarboneto;
  
  cin>>ptr->c>>ptr->h;
  
  cout<<((ptr->c)*12)+(ptr->h);
  
  delete ptr;
  ptr=NULL;
  
  return 0;
}
