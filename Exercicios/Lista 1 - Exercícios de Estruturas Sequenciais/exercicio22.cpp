#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int produto,caixa;
    cin>>produto;
    caixa = ceil(float(produto)/6);
    cout<<caixa;
    return 0;
}
