#include <iostream>

using namespace std;

int main(){
    int tamA,tamB;
    bool igual=false;

    cin>>tamA;
    int vA[tamA];
    
    for (int i=0;i<tamA;i++){
        cin>>vA[i];
    }
    
    cin>>tamB;
    int vB[tamB];
    
    for (int i=0;i<tamB;i++){
        cin>>vB[i];
    }
    
    for (int i=0;i<tamA;i++){
        igual=false;
        for(int j=0;j<tamB;j++){
            if (vA[i]==vB[j]){
                igual=true;
            }
        }
        if (not igual){
            cout<<vA[i]<<" ";
        }
    }
    
    return 0;
}
