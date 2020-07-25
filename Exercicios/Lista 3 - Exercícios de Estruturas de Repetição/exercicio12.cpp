#include <iostream>

using namespace std;

int main(){
    int n1,n2,naux,resto,mdc;
    bool para = false;
    cin>>n1>>n2;
    if (n2>n1){
        naux=n1;
        n1=n2;
        n2=naux;
    }
    
    while (para == false){
        if (n1%n2==0){
            mdc=resto;
            para = true;
        }
        else{
            resto=n1%n2;
            n1=n2;
            n2=resto;
        }
    }
    cout<<mdc;
    
    return 0;
}
