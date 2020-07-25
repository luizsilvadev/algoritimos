#include <iostream>
#include <cstring>

using namespace std;

int main(){
  char *v1=new char[100];
  char *v2=new char[100];
  
  cin.getline(v1,100);
  cin.getline(v2,100);

  int tam=strlen(v1)+strlen(v2);
  
  char *vc=new char [tam];
    
  memcpy(vc,v1,strlen(v1));
  
  char *aux=new char;
  *aux=' ';
  strcat(vc,aux);
  strcat(vc,v2);
   
  
  delete[] v1;
  delete[] v2;  
  
  v1=NULL;
  v2=NULL;
    
  for (int i=0;i<int(strlen(vc));i++){
    cout<<vc[i];
  }
  
  delete[] vc;
  vc=NULL;
  
  return 0;
}
