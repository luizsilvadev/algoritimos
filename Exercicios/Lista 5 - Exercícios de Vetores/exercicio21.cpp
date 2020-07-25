#include <iostream>

using namespace std;

int main(){
    int codigo;
    float vetor[20];
    
    cin>>codigo;
    
    for (int i=0;i<20;i++){
        cin>>vetor[i];
    }
    
    if (codigo == 1){
        for (int i=0;i<20;i++){
            cout<<vetor[i]<<" ";
        }
    }
    else if (codigo ==2){
        for (int i=19;i>=0;i--){
            cout<<vetor[i]<<" ";
        }
    }
    
    return 0;
}
