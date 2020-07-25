#include <iostream>

using namespace std;

int main(){
    int vetor[7];
    int multiplicados=1;
    int indices=0;
    
    for(int i=0;i<7;i++){
        cin>>vetor[i];
    }
    
    while (indices>=0){
        cin>>indices;
        if (indices>=0){
            multiplicados *= vetor[indices];
        }
    }
    
    cout<<multiplicados;
    
    return 0;
}
