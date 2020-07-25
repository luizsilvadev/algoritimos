#include <iostream>

using namespace std;

int main(){
	int quantidade,posicao;
    cin>>quantidade>>posicao;
    if (posicao+1<=quantidade/2){
        cout<<1+2*posicao;
    }
    else{
        posicao -= quantidade/2;
        cout<<0+2*posicao;
    }
    
    return 0;
}
