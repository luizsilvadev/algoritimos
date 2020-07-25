#include <iostream>

using namespace std;

int qntd_divisores(int n,int vetor[]){
    int contador = 0;
    for (int i=0;i<5;i++){
        if (n%vetor[i]==0){
            contador++;
        }
    }
    return contador;
}

int main(){
    int v1[10];
    int v2[5];
    
    for (int i=0;i<10;i++){
        cin>>v1[i];
    }
    
    for (int i=0;i<5;i++){
        cin>>v2[i];
    }
     
    for (int i: v1){
        cout<<i<<" "<<qntd_divisores(i,v2)<<endl;
    }
    return 0;
}
