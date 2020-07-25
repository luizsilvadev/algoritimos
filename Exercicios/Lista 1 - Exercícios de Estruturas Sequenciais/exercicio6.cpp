#include <iostream>
using namespace std;

int main()
{
    int quantidade,sobras,notas50,notas10,notas5,notas1;
    cin >> quantidade;
    notas50 = quantidade/50;
    sobras=quantidade%50;

    
    notas10 = sobras/10;
    sobras %= 10;
    
    notas5 = sobras/5;
    sobras %= 5;
    
    notas1 = sobras;
    
    cout<<notas50<<endl;
    cout<<notas10<<endl;
    cout<<notas5<<endl;
    cout<<notas1;
    return 0;
}
