#include <iostream>

using namespace std;

int main(){
    int qntd;
    bool palindromo=true;
    cin>>qntd;
    
    int vetor[qntd];
    
    for (int i=0;i<qntd;i++){
        cin>>vetor[i];
    }
    
    int cont1=0;
    int cont2=qntd-1;
    int contador = 0;
    
    while (contador<qntd and palindromo){
        if (vetor[cont1]!=vetor[cont2]){
            palindromo=false;
        }
        cont1++;
        cont2--;
        contador++;
    }
    cout<<palindromo;
    
    return 0;
    
}
