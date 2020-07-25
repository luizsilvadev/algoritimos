#include <iostream>

using namespace std;

int main(){
    int tamanhov,P;
    cin>>tamanhov;
    int v[tamanhov];
    
    for (int i=0;i<tamanhov;i++){
        cin>>v[i];
    }
    
    cin>>P;
    
    for (int i=1+P;i<tamanhov;i++){
        cout<<v[i]<<" ";
    }
    
    for (int i=0;i<1+P;i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}
