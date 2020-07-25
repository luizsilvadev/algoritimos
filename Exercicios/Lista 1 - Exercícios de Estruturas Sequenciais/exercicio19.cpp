#include <iostream>
using namespace std;

int main()
{
    int ms,horas,minutos;
    float segundos,sobra,msemsegs;
    cin>>ms;
    msemsegs=float(ms)/1000;
    horas = (msemsegs/60)/60;
    sobra = msemsegs-(horas*60*60);
    minutos = sobra/60;
    segundos = msemsegs -float(((horas*60*60)+(minutos*60)));
    cout<<horas<<" : "<<minutos<<" : "<<segundos;
    return 0;
}
