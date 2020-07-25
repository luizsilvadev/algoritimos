#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n,cont=0;
    float r,pg;
    cin>>r>>n;
    while (cont<n){
        if (cont==0)
            pg=1;
        else
            pg *= r;
        cout<<pg<<endl;    
        cont++;
    }
    return 0;
}
