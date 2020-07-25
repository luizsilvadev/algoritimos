#include <iostream>

using namespace std;

struct sangue{
    string nome;
    string tipo;
};

void print(string tipo,sangue pessoa[],int qnt){
    for (int i=0;i<qnt;i++){
        if (tipo == "AB" and pessoa[i].tipo=="AB"){
            cout<<pessoa[i].nome<<endl;
        }
        else if (tipo =="A" and pessoa[i].tipo=="A"){
            cout<<pessoa[i].nome<<endl;
        }
        else if (tipo =="B" and pessoa[i].tipo=="B"){
            cout<<pessoa[i].nome<<endl;
        }
        else if (tipo=="O" and pessoa[i].tipo=="O"){
            cout<<pessoa[i].nome<<endl;
        }
    }
}
    
int main(){
    int qnt;
    cin>>qnt;
    
    sangue pessoas[qnt];
    
    for (int i=0;i<qnt;i++){
        cin>>pessoas[i].nome>>pessoas[i].tipo;
    }
    
    string receptor;
    
    cin>>receptor;
    
    if (receptor=="AB"){
        print(receptor,pessoas,qnt);
        print("A",pessoas,qnt);
        print("B",pessoas,qnt);
        print("O",pessoas,qnt);
    }
    else if (receptor=="A"){
        print(receptor,pessoas,qnt);
        print("O",pessoas,qnt);
    }
    else if (receptor=="B"){
        print(receptor,pessoas,qnt);
        print("O",pessoas,qnt);
    }
    else if (receptor=="O"){
        print(receptor,pessoas,qnt);
    }
    
    return 0;
}
