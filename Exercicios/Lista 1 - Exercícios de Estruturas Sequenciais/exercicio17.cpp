#include <iostream>
using namespace std;

int main()
{
    string n;
    int n1,n2,n3;
    cin>>n;
    n1 =n[0]-48;
    n2 = n[1]-48;
    n3 = n[2]-48;
    cout<<n1*n2*n3;
    return 0;
}
