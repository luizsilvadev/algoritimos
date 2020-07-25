#include <iostream>

using namespace std;

int main(){
    int qntd,maior=0;

   
    cin>>qntd;

    string palavras[qntd];

    string maiorpalavra="";
        
    for (int i=0;i<qntd;i++){
        cin>>palavras[i];
        if (int(palavras[i].length())>maior){
            maior = palavras[i].length();
            maiorpalavra=palavras[i];
        }
    }

    for (string i: palavras){
        for (int j=i.length();j<maior;j++){
            cout<<"*";
        }
        cout<<i<<endl;
    }
    return 0;
}
