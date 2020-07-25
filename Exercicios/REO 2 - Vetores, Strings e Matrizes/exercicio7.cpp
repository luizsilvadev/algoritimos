/* Questão 7: Busca Binária - Substituição

Dado um número N, um vetor V de N números inteiros ordenados, um valor 
de busca inteiro B, e um valor de substituição inteiro S, substitua o 
valor de B no vetor V pelo valor de S. Para encontrar o valor B no 
vetor, a busca binária deve ser utilizada. Caso o valor de busca não 
exista no vetor, o vetor original deve ser impresso. Como resultado, 
o programa deve imprimir o vetor resultante ou o vetor original, 
dependendo do caso, e o número de comparações que foram realizadas.

Entradas:

Valor inteiro N,
N valores inteiros ordenados que devem ser armazenados em um vetor;
Valor de busca B;
Valor de substituição S.
Saídas:

Vetor após a substituição.
Número de comparações.
Exemplo de Entrada:

6
1 2 3 4 5 6
5
-1
Exemplo de Saída:

1 2 3 4 -1 6
2
Exemplo de Entrada:

5
1 2 3 4 5 
6
3
Exemplo de Saída:

1 2 3 4 5
3

*/

#include <iostream>

using namespace std;

int contador = 0;
int buscaBinaria(int arranjo[],int tamanho, int chave) {
	int i = 0;
	int f = tamanho -1;
	int meio;
	while (i<=f) {
		contador++;
		meio = (i+f)/2;
		if (arranjo[meio]==chave)
			return meio;
		else {
			if (chave>arranjo[meio])
				i=meio+1;
			else
				f=meio-1;
		}
	}
	return -1;
}


int main () {
	int N, B, S;
	cin >> N;
	int V[N];
	for (int i = 0; i < N; i++){
		cin >> V[i];
	}
	cin >> B;
	cin >> S;
	
	int busca = buscaBinaria(V, N, B);
	if (busca != -1){
		V[busca] = S;
	}
	
	for (int i = 0; i < N; i++){
		cout << V[i] << " ";
	}
	
	cout << endl;
	if ( contador > 0) {
		cout << contador;
	} else {
		cout << S;
	}
	
	return 0;
}
