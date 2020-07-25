#include <iostream>

using namespace std;

int main(){
    int lista[8];
    int qntdpositivos=0;
    int qntdnegativos=0;
    
    for(int i=0;i<8;i++){
        cin>>lista[i];
        if (lista[i] >= 0){
            qntdpositivos++;
         }
        else{
            qntdnegativos++;
        }
    }
    
    int positivos[qntdpositivos];
    int negativos[qntdnegativos];

    int contador=0;
    int contp=0;
    int contn=0;
    
    while (contador<8){
        if (lista[contador]>=0){
            positivos[contp]=lista[contador];
            contp++;
        }
        else{
            negativos[contn]=lista[contador];
            contn++;
        }
        contador++;
    }
    for (int i: positivos){
        cout<<i<<" ";
    }
    cout<<endl;
    for (int i: negativos){
        cout<<i<<" ";
    }
    return 0;
}
