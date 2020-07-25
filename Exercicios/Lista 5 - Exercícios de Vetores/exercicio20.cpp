#include <iostream>

using namespace std;

int main(){
    int vetor[20];    
    
    for (int i=0;i<20;i++){
        cin>>vetor[i];
    }
    
    int maior=vetor[0];
    
    for (int i:vetor){
        if (i>maior){
            maior=i;
        }
    }
    
    for (int i=0;i<20;i++){
        cout<<float(vetor[i])/maior<<" ";
    }
    
    return 0;
}    
