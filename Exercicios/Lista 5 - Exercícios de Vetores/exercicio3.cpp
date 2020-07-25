#include <iostream>

using namespace std;

int main(){
    int tamv,busca,contador=0,indice=-1,meio;
    cin>>tamv;
    int vetor[tamv];
    
    int posfinal=tamv-1,posinicial=0;
    
    for (int i=0;i<tamv;i++){
        cin>>vetor[i];
    }
    
    cin>>busca;
    
    while (posinicial<=posfinal){
        meio=(posinicial+posfinal)/2;
        contador++;
        if (busca==vetor[meio]){
            posinicial=posfinal+1;
            indice=meio;
        }
        else{
            if (busca>vetor[meio]){
                posinicial=meio+1;
            }
            else{
                posfinal=meio-1;
            }
        }
    }
    
    cout<<indice<<endl<<contador;
    
    return 0;
}
    
