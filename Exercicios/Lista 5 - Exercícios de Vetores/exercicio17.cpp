#include <iostream>

using namespace std;

int main(){
    int tam;
    bool encontrou=false;
    cin>>tam;
    
    char vetor[tam],busca;
    
    for (int i=0;i<tam;i++){
        cin>>vetor[i];
    }
    
    cin>>busca;
    
    for (int i=0;i<tam;i++){
        if (vetor[i]==busca){
            cout<<i<<" ";
            encontrou=true;
        }
    }
    
    if (not encontrou){
        cout<<-1;
    }
    
    return 0;
}
