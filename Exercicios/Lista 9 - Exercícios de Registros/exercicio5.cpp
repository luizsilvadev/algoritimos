#include <iostream>
#include <cmath>

using namespace std;

struct pontos{
    int x,y;
};

float distancia(pontos p1,pontos p2){
    return sqrt(pow(p2.x-p1.x,2)+pow(p2.y-p1.y,2));
}

int main(){
    pontos vetor[5];
    
    for (int i=0;i<5;i++){
        cin>>vetor[i].x>>vetor[i].y;
    }
    
    float menord=distancia(vetor[0],vetor[1]);
    int indicemenor=1;
        
    for (int i=2;i<5;i++){
        if (distancia(vetor[0],vetor[i])<menord){
            menord=distancia(vetor[0],vetor[i]);
            indicemenor=i;
        }
    }
    
    cout<<vetor[indicemenor].x<<" "<<vetor[indicemenor].y;
    
    return 0;
    
}
