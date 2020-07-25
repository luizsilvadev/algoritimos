#include <iostream>

using namespace std;

int main(){
    int qnt1,qnt2;
    bool tem=false;
    
    cin>>qnt1>>qnt2;
    
    float v1[qnt1],v2[qnt2];
    
    for (int i=0;i<qnt1;i++){
        cin>>v1[i];
    }
    
    for (int i=0;i<qnt2;i++){
        cin>>v2[i];
    }
    
    for (float i:v1){
        for (float j:v2){
            if (i==j){
                tem=true;
                cout<<j<<" ";
            }
        }
    }
    
    if (not tem){
        cout<<-1;
    }
    
    return 0;
}
                
