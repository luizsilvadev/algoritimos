#include <iostream>

using namespace std;

int rashe(string palavra){
    const int nprimo=13;
    const int divisor=10;
    long hash =0;
    
    for (int j=0;j<int(palavra.length());j++){
        hash = (nprimo*hash+palavra[j])%divisor;
    }
    
    return hash;
}

int main(){
    int tamanho,soma=0;
    cin>>tamanho;
    
    string palavras[tamanho];
    int hashes[tamanho];
    
    for (int i=0;i<tamanho;i++){
        cin>>palavras[i];
        hashes[i]=rashe(palavras[i]);
        soma += hashes[i];
    }
    
    for (int i=0;i<tamanho;i++){
        cout<<hashes[i]<<" ";
    }
    
    cout<<soma;
    
    return 0;
}
