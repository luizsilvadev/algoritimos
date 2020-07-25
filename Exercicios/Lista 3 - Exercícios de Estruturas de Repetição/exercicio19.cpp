#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int cont=0,n;
    double y = sqrt(2);
    double x = y/2;
    cin>>n;
        
    while (cont<n-1){
        y = sqrt(2+y);
        x *= y/2;
        cont++;
    }
    cout<<pow(x,-1)*2<<endl;
    
    return 0;
}
