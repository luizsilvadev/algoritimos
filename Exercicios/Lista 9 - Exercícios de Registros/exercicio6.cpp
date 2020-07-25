#include <iostream>

using namespace std;

struct crianca{
    string nome,presente;
    int boas,ruins;
};

int main(){
    int foi=false;
    int qnt;
    cin>>qnt;
    
    crianca criancas[qnt];
    
    for (int i=0;i<qnt;i++){
        cin>>criancas[i].nome>>criancas[i].presente>>criancas[i].boas>>criancas[i].ruins;
    }
    
    for (int i=0;i<qnt;i++){
        if (criancas[i].boas<=criancas[i].ruins){
            cout<<criancas[i].nome<<" ";
            foi=true;
        }
    }
    
    if (not foi){
        cout<<"Ninguem";
    }
    
    return 0;
}   
