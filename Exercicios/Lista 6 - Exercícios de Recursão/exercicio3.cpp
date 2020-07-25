#include <iostream>

using namespace std;

int sequencia(int n){
    return n;    
}

int main(){
    int n;
    cin>>n;
    
    for (int i=0;i<=n;i++){
        cout<<sequencia(i)<<" ";
    }
    
    return 0;
}
