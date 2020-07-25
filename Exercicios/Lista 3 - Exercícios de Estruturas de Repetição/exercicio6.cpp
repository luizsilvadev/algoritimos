#include <iostream>

using namespace std;

int main(){
    int n,ns;
    cin>>ns;
    n=ns;
    while (ns%n != 2){
        cin>>ns;
    }
    cout<<ns/n;
    
    return 0;
}
