#include <iostream>

using namespace std;

int main(){
    int tamanho;
    char c1,c2;
    bool intervalo=false;
    
    cin>>tamanho;
    
    char vetor[tamanho];
    
    for (int i=0;i<tamanho;i++){
        cin>>vetor[i];
    }
    
    cin>>c1>>c2;
    
    
    int contador=0;
    
    while (not intervalo){
        if(vetor[contador]==c1 or vetor[contador]==c2){
            intervalo=true;
            if (vetor[contador]==c2){
                c2=c1;
            }
        }
        contador++;
    }
    
    while (intervalo){
        if (vetor[contador]!=c2){
            cout<<vetor[contador]<<" ";
        }
        else{
            intervalo=false;
        }
        contador++;
    }
    
    return 0;
}
