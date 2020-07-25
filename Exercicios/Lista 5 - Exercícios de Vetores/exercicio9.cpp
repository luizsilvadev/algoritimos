#include <iostream>

using namespace std;

int main(){
    int vetor[7];
    int qntd2=0;
    int qntd3=0;
    int qntd3e2=0;
    
    for (int i=0;i<7;i++){
        cin>>vetor[i];
        if (vetor[i]%2==0){
            qntd2++;
        }
        if (vetor[i]%3==0){
            qntd3++;
        }
        if (vetor[i]%3==0 and vetor[i]%2==0){
            qntd3e2++;
        }
    }
    
    int divisiveis2[qntd2];
    int divisiveis3[qntd3];
    int divisiveis3e2[qntd3e2];
    
    int cont2=0;
    for (int i:vetor){
        if (i%2==0){
            divisiveis2[cont2]=i;
            cont2++;
        }
    }
    
    int cont3=0;
    for (int i:vetor){
        if (i%3==0){
            divisiveis3[cont3]=i;
            cont3++;
        }
    }
    
    int cont3e2=0;
    for (int i: vetor){
        if (i%2==0 and i%3==0){
            divisiveis3e2[cont3e2]=i;
            cont3e2++;
        }
    }
    
    if (qntd2>0){
        for (int i:divisiveis2){
            cout<<i<<" ";
        }
    }
    else{
        cout<<0;
    }
    
    cout<<endl;
    
    if (qntd3>0){
        for (int i:divisiveis3){
            cout<<i<<" ";
        }
    }
    else{
        cout<<0;
    }
    
    cout<<endl;
    
    if (qntd3e2>0){
        for (int i:divisiveis3e2){
            cout<<i<<" ";
        }
    }
    else{
        cout<<0;
    }
    
    return 0;
}

