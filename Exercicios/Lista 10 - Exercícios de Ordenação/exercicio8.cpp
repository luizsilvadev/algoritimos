#include <iostream>

using namespace std;

struct equipe{
    string nome;
    int pontos,v,sgols;
};

void selection_sort(equipe vet[],int tam){
    int menor;
    for(int i=tam-1;i>0;i--){
        menor=i;
        for (int j=i-1;j>=0;j--){
            if (vet[j].sgols<vet[menor].sgols){
                menor=j;
            }
        }
        swap(vet[i],vet[menor]);
    }
    for(int i=tam-1;i>0;i--){
        menor=i;
        for(int j=i-1;j>=0;j--){
            if (vet[j].v<vet[menor].v){
                menor=j;
            }
        }
        swap(vet[i],vet[menor]);
    }
    for(int i=tam-1;i>0;i--){
        menor=i;
        for(int j=i-1;j>=0;j--){
            if (vet[j].pontos<vet[menor].pontos ){
                menor=j;
            }
        }
        swap(vet[i],vet[menor]);
    }
}

int main(){
    int tam;
    cin>>tam;
    
    equipe times[tam];
        
    for (int i=0;i<tam;i++){
        cin>>times[i].nome>>times[i].pontos>>times[i].v>>times[i].sgols;
    }
    
    selection_sort(times,tam);
    
    for (int i=0;i<tam;i++){
        cout<<times[i].nome<<" "<<times[i].pontos<<" "<<times[i].v<<" "<<times[i].sgols<<endl;
    }
    
    return 0;
}
