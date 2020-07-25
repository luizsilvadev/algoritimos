#include <iostream>
using namespace std;

int main()
{
    int pago,preco,notas20,notas10,notas5,notas2,notas1,sobras,troco;
    cin >>pago;
    cin >>preco;
    troco= pago - preco;
    notas20=troco/20;
    sobras=troco%20;
    
    notas10=sobras/10;
    sobras %= 10;
    
    notas5 = sobras/5;
    sobras %= 5;
    
    notas2 = sobras/2;
    sobras %= 2;
    
    notas1 = sobras;
    
    cout<<notas20<<endl;
    cout<<notas10<<endl;
    cout<<notas5<<endl;
    cout<<notas2<<endl;
    cout<<notas1;
    
    return 0;
}
