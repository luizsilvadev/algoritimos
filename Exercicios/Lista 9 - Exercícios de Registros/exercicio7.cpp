#include <iostream>

using namespace std;

struct compra{
    string nome,tipo;
};

struct cesta{
    string tipo;
    int porcoes;
};

int main(){
    int qntcestas;
    cin>>qntcestas;
    
    cesta cestas[qntcestas];
    
    for (int i=0;i<qntcestas;i++){
        cin>>cestas[i].tipo>>cestas[i].porcoes;
    }
    
    int qntcompras;
    cin>>qntcompras;
    
    compra compras[qntcompras];
    
    for (int i=0;i<qntcompras;i++){
        cin>>compras[i].nome>>compras[i].tipo;
    }
    
    int soma=0;
    
    for (int i=0;i<qntcompras;i++){
        for (int j=0;j<qntcestas;j++){
            if (compras[i].tipo==cestas[j].tipo){
                soma+=cestas[j].porcoes;
            }
        }
    }
    
    cout<<soma;
    
    return 0;
    
}
