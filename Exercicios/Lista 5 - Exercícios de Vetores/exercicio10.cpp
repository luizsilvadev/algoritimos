#include <iostream>

using namespace std;

int main(){
    int vetor[10]={0};
    int k,novo,p,elementos;
    
    cin>>k;
    
    for (int i;i<k;i++){
        cin>>elementos;
        vetor[i]=elementos;
    }
    
    cin>>novo>>p;
    
    for (int i=0;i<p;i++){
        cout<<vetor[i]<<" ";
    }
    
    cout<<novo<<" ";
    
    for (int i=p;i<10-1;i++){
        cout<<vetor[i]<<" ";
    }
    
    return 0;
}
