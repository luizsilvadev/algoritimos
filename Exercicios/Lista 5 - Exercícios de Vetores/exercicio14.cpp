#include <iostream>

using namespace std;

int main(){
    int tamanho;
    char busca;
    int indice=-1;
    bool jafoi=false;
    
    cin>>tamanho;
    
    char vetor[tamanho];
    
    for (int i=0;i<tamanho;i++){
        cin>>vetor[i];
    }
    
    cin>>busca;
    
    int contador=0;
    while (contador<tamanho and not jafoi){
        if (vetor[contador]==busca){
            indice=contador;
            jafoi=true;
        }
        contador++;
    }
    
    cout<<indice;

    return 0;
}
