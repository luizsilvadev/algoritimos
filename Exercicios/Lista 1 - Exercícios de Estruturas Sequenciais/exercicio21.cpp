#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float alturaDegrau,alturaTotal;
    cin>>alturaDegrau;
    cin>>alturaTotal;
    alturaTotal *= 100;
    cout<<ceil(alturaTotal/alturaDegrau);
    return 0;
}
