#include <iostream>
using namespace std;

int main()
{
    int horas,minutos,h_em_mins;
    cin>>horas;
    cin>>minutos;
    h_em_mins = horas*60;
    minutos += h_em_mins;
    cout<<h_em_mins<<endl;
    cout<<minutos<<endl;
    cout<<minutos*60;
    return 0;
}
