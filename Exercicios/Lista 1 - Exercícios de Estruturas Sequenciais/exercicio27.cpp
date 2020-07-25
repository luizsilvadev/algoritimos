#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int xJan,yJan,xMouse,yMouse;
    float xDados,yDados;
    cin>>xJan;
    cin>>yJan;
    cin>>xMouse;
    cin>>yMouse;
    xDados=((2*float(xMouse))/xJan)-1;
    yDados=((2*float(yMouse))/-yJan)+1;
    cout<<xDados<<endl;
    cout<<yDados;
    return 0;
}
