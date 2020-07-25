#include <iostream>

using namespace std;

int main(){
  int l,c;
  int busca;
  int **matriz;
  bool achou=false;
  
  cin>>l>>c;
   
  matriz=new int* [l];
  for (int i=0;i<l;i++){
    matriz[i]=new int[c];
  }
  
  for (int i=0;i<l;i++){
    for (int j=0;j<c;j++){
      cin>>matriz[i][j];
    }
  }
  
  cin>>busca;
  
  for (int i=0;i<l;i++){
    for (int j=0;j<c;j++){
      if (matriz[i][j]==busca){
        achou=true;
        j+=c;
        i+=l;
      }
    }
  }
  
  for (int i=0;i<l;i++){
    delete[] matriz[i];
  }
  
  delete[] matriz;
  
  cout<<achou;

  return 0;
}
