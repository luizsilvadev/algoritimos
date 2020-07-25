#include <iostream>

using namespace std;

int main(){
    int n,cont=1,soma=0;
    cin>>n;
    while (cont<=n){
       
        if (cont == n){
            soma += cont;
            cout<<cont<<"="<<soma;
        }
        else if (n%cont==0){
            soma += cont;
            cout<<cont<<"+";
        
        }
        cont++;
    }
    
    return 0;
}
