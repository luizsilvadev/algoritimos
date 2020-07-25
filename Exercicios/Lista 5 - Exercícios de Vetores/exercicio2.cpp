#include <iostream>

using namespace std;

int main(){
    float vetor[10];
    float soma=0;
    int qntdnegativos=0;
    
    for(int i = 0;i<10;i++){
        cin>>vetor[i];
        if (vetor[i]>=0){
            soma+=vetor[i];
        }
        else{
            qntdnegativos++;
        }
    }
    
    cout<<qntdnegativos<<endl<<soma;
    
    return 0;
    
}
