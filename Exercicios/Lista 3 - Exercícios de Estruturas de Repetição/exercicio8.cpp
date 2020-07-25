#include <iostream>

using namespace std;

int main(){
    int n,cont=1,fatorial=1;
    cin>>n;
    
    while (cont<=n){
        fatorial *= cont;
        cont++;
    }
    cout<<fatorial;
    
    return 0;
}
