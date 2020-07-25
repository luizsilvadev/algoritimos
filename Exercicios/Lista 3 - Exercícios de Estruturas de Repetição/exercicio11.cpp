#include <iostream>

using namespace std;

int main(){
    float numeros,maior,maior2,media_7=0;
    int cont=0;
    bool jafoi = false;
    cin>>numeros;
    maior=numeros;
    maior2=numeros;
    media_7=numeros;
    
    while (cont<6){
        cin>>numeros;
        if (numeros>maior){
            maior2=maior;
            maior = numeros;
        }
        else if (numeros>maior2 and numeros<maior)
            maior2=numeros;
        else if (jafoi == false){
            maior2=numeros;
            jafoi=true;
        }
        media_7 += numeros;
        cont++;
    }
    cout<<maior<<endl<<maior2<<endl<<(media_7-maior-maior2)/5;
    
    return 0;
}
