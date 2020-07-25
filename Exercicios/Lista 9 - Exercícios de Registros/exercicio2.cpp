#include <iostream>

using namespace std;

struct coordenadas{
    double x;
    double y;
};

struct car{
    coordenadas vel;
    coordenadas pos;
};

double calculo(double a,double va,float t){
	return a+va*t;
}

int main(){	
	car entrada,saida;
    float tempo;
    
    cin>>entrada.pos.x>>entrada.pos.y>>entrada.vel.x>>entrada.vel.y>>tempo;
    
    saida.pos.x=calculo(entrada.pos.x,entrada.vel.x,tempo);
    saida.pos.y=calculo(entrada.pos.y,entrada.vel.y,tempo);
    
    cout<<saida.pos.x<<" "<<saida.pos.y;

    return 0;
}
