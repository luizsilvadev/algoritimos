#include <iostream>

using namespace std;

void insertion_sort(int vet[], int tam){
    int valor_pivo, j;
    for (int i = 1; i < tam; i++) {
        valor_pivo = vetor[i];
        j = i - 1;
        while ((j >= 0) and (valor_pivo < vetor[j])){
            vetor[j+1] = vetor[j];
            j--;
        }
        vetor[j+1] = valor_pivo;
    }
}

