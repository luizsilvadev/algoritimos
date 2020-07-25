#include <iostream>

using namespace std;

struct tempo{
    int entrada;
    int saida;
};

struct gnomo{
    string nome;
    tempo vetor[7];
};

int calculotempo(tempo v[]){
    int soma=0;
    int entrada,saida;
    for (int i=0;i<7;i++){
        entrada = v[i].entrada;
        if (v[i].entrada>v[i].saida){
            saida=v[i].saida+24;
        }
        else{
            saida=v[i].saida;
        }
        soma+=saida-entrada;
    }
    
    return soma;
}
    
int main(){
    int qnt;
    cin>>qnt;
    
    gnomo lista[qnt];
    
    for (int i=0;i<qnt;i++){
        cin>>lista[i].nome;
        for (int j=0;j<7;j++){
            cin>>lista[i].vetor[j].entrada>>lista[i].vetor[j].saida;
        }
    }
    
    for (int i=0;i<qnt;i++){
        if (calculotempo(lista[i].vetor)<70){
            cout<<lista[i].nome<<" "<<calculotempo(lista[i].vetor)<<endl;
        }
    }
    
    return 0;
}
