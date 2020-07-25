#include <iostream>

using namespace std;

int main(){
    float x1,y1,x2,y2,coordenada,distanciay1,distanciax1,distanciax2,distanciay2;
    char xouy;
    cin>>x1>>y1>>x2>>y2>>xouy>>coordenada;

    distanciax1=x2-x1;
    distanciay1=y2-y1;
    
    

    if (xouy =='x'){
        distanciax2=coordenada-x1;
        distanciay2=distanciax2*distanciay1/distanciax1;
        if (x1<x2){
            if (coordenada>=x1 or coordenada<=x2)
                cout<<distanciay2+y1;
            else
                cout<<"nenhuma";
        }
        else if (x2>x1){
            if (coordenada<=x1 or coordenada>=x2)
                cout<<distanciay2+y1;
            else
                cout<<"nenhuma";
        }
        else
            cout<<"nenhuma";
    }
    
    else if (xouy=='y'){
        distanciay2=coordenada-y1;
        distanciax2=distanciax1*distanciay2/distanciay1;
        if (y1<y2){
            if (coordenada>=y1 or coordenada<=y2)
                cout<<distanciax2+x1;
            else
                cout<<"nenhuma";
        }
        else if (y1>y2){
            if (coordenada<=y1 or coordenada>=y2)
                cout<<distanciax2+x1;
            else
                cout<<"nenhuma";
        }
        else
            cout<<"nenhuma";
        }
}
