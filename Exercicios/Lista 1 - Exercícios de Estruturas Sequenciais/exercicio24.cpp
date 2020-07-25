#include <iostream>
using namespace std;

int main()
{
    int notas100,notas50,notas20,notas10,notas5,notas2,notas1,valor,sobras;
    cin>>valor;
    notas100=valor/100;
    sobras=valor%100;
    notas50=sobras/50;
    sobras %= 50;
    notas20 = sobras/20;
    sobras %= 20;
    notas10 = sobras/10;
    sobras %= 10;
    notas5 = sobras/5;
    sobras %= 5;
    notas2 = sobras/2;
    sobras %= 2;
    notas1=sobras;
    cout<<notas100<<endl;
    cout<<notas50<<endl;
    cout<<notas20<<endl;
    cout<<notas10<<endl;
    cout<<notas5<<endl;
    cout<<notas2<<endl;
    cout<<notas1;
    return 0;
}
