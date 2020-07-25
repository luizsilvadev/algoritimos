#include <iostream>

using namespace std;

int main(){
    int tamv,busca,contador=0;
    bool achou=false;
    
    cin>>tamv;
    
    int vetor[tamv];
    
    for (int i=0;i<tamv;i++){
        cin>>vetor[i];
    }
    
    cin>>busca;
    
    while (contador<tamv and not achou){
        if (vetor[contador]==busca){
            achou=true;
        }
        contador++;
    }
    
    int posinicial=0,posfinal=tamv-1,meio,qntdbin=0,indice=-1;
    
    while (posinicial<=posfinal){
        meio = (posinicial+posfinal)/2;
        if (busca==vetor[meio]){
            indice=meio;
            posinicial=posfinal+1;
        }
        else{
            if (busca>vetor[meio]){
                posinicial=meio+1;
            }
            else{
                posfinal=meio-1;
            }
        }
        qntdbin++;
    }
    
    cout<<indice<<endl<<contador<<endl<<qntdbin;
    
    return 0;
    
}
