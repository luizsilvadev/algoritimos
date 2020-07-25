#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    const float pi=3.14159265358;
    int raio,cadeiras,cont=0;
    cin>>raio>>cadeiras;
    float angulos=360/cadeiras,anguloatual=0;
    
    cout<<fixed<<setprecision(2);
    
    while (cont<cadeiras){
        cout<<cos(anguloatual*pi/180)*raio<<" "<<sin(anguloatual*pi/180)*raio<<endl;
        anguloatual += angulos;
        cont++;
    }

    return 0;
}
