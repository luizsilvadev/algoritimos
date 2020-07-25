#include <iostream>

using namespace std;

int main(){
    string palavra;
    char letra;
    bool repete = true;
    int i=0;
    cin>>palavra;
    
    while (repete and i<int(palavra.length())){
        int qntd=0;
        letra = palavra[i];
        for(char j:palavra){
            if (j!=palavra[i]){
                qntd++;
            }
        }
        if (qntd==int(palavra.length())-1){
            repete = false;
        }
        i++;
    }
    
    cout<<letra;
    return 0;
    
}
