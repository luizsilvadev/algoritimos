#include <iostream>

using namespace std;

int main(){
    float lista[12];
    for (int i=0;i<12;i++){
        cin>>lista[i];
    }
    
    float maior=lista[0];
    float menor=lista[0];
    
    int indice_maior=0;
    int indice_menor=0;
    
    for (int i=0;i<12;i++){
        if (lista[i]>maior){
            maior=lista[i];
            indice_maior=i;
        }
        else if (lista[i]<menor){
            menor=lista[i];
            indice_menor=i;
        }
    }
    
    string meses[12]={"janeiro","fevereiro","marco","abril","maio","junho","julho","agosto","setembro","outubro","novembro","dezembro"};
    
    cout<<meses[indice_maior]<<endl<<meses[indice_menor];
    
    return 0;
}
