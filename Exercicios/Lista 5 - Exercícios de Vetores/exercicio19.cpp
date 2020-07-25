#include <iostream>

using namespace std;

int main(){
    int va[5],vb[5];
    int soma=0;
    
    for (int i=0;i<5;i++){
        cin>>va[i];
    }
    
    for (int i=4;i>=0;i--){
        cin>>vb[i];
    }
    
    for (int i=0;i<5;i++){
        soma+=va[i]-vb[i];
    }
    
    cout<<soma;
    
    return 0;
}
