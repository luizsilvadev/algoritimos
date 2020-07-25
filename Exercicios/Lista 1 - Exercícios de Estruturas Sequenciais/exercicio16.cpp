#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float Nproduzidos,comuns,luxo;
    cin >>Nproduzidos;
    comuns=Nproduzidos*2/3;
    cout<<ceil(comuns)<<endl;
    luxo = Nproduzidos/3;
    cout<<floor(luxo);
    return 0;
}
