#include <iostream>

using namespace std;

int main(){
    float h,hextra,hfalta;
    cin>>hextra>>hfalta;
    h=(hextra-(2/3*hfalta))*60;
    
    if (h<=600){
        cout<<100;
    }
    else if (h>600 and h<=1200){
        cout<<200;
    }
    else if (h>1200 and h<=1800){
        cout<<300;
    }
    else if (h>1800 and h <=2400){
        cout<<400;
    }
    else if (h>2400){
        cout<<500;
    }
    
    return 0;
}
