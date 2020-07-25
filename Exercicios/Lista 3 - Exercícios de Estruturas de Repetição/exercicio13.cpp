#include <iostream>

using namespace std;

int main(){
    int n,cont=1;
    double euller=0;
    float fatorial = 1;
    cin>>n;
    
    euller += 1/(fatorial);
    while (cont<n){
        euller += 1/(fatorial);
        fatorial *= cont+1;

        cont++;
    }
    cout<<euller;
    
    return 0;
}
