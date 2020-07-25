#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

struct aluno{
  int matricula,nota;
};

void ler(aluno vet[]){
  ifstream arquivo("notas.txt");
  int i=0;
  while (arquivo>>vet[i].matricula>>vet[i].nota){
    i++;
  }
}

void normalizar(aluno vet[],int tam){
  int maior=vet[0].nota;
  for (int i=0;i<tam;i++){
    if (vet[i].nota>maior){
      maior=vet[i].nota;
    }
  }
  
  for (int i=0;i<tam;i++){
    vet[i].nota=round((float(vet[i].nota)*100)/float(maior));
  }
}

void escrever(aluno vet[],int tam){
  ofstream arquivo("notas.txt");
  for (int i=0;i<tam;i++){
    arquivo<<vet[i].matricula<<" "<<vet[i].nota<<endl;
  }
}

int main(){
  ifstream arquivo("notas.txt");
  int lixo;
  int tam=0;
  
  while (arquivo>>lixo){
    tam++;
  }
  
  tam/=2;
  
  aluno alunos[tam];
  
  ler(alunos); 
  normalizar(alunos,tam);
  escrever(alunos,tam);
  
  return 0;
}
