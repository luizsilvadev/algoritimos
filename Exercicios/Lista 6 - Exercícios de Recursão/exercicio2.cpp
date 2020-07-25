#include <iostream>

using namespace std;

int multiplicacao(int n1){
    return multiplicacao(n1+n1);
}

int main(){
    int n1,n2,multiplicado;
    cin>>n1>>n2;
    for (int i=0;i<n2;i++){
        multiplicado=multiplicacao(i);
    }
    
    cout<<multiplicado;

    return 0;
}
