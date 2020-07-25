/* Questão 2: Vetores - Inserção em um vetor

Faça um programa que insere elementos em um vetor de inteiros deslocando
os elementos existentes. O vetor terá capacidade fixa para 10 
elementos e iniciará com todos os valores iguais a zero. 
O programa deverá a princípio ler k valores a serem colocados no vetor
(sendo k <= 10). Ele deverá ler, em seguida, o valor de um novo 
elemento e a posição p na qual ele deve ser inserido. O programa 
deverá então inserir o novo elemento na posição posição p deslocando 
os elementos existentes (descartando o último elemento que ficar 
sobrando). Por fim, o programa deve escrever os elementos do vetor.

Obs: para soluções em Python utilize as listas padrões da linguagem 
ao invés de vetores. Além disso, as alterações devem ser feitas 
usando apenas os índices dos elementos (não devem ser utilizadas 
funções de inserção em listas).

Entradas:

Valor de k (quantidade de elementos lidos inicialmente).
Linha contendo os k elementos iniciais do vetor.
Novo elemento a ser inserido no vetor.
Valor de p (posição na qual o novo elemento será inserido no vetor).
Saídas:

Os 10 elementos do vetor após a inserção.
Entradas:
5
1 2 3 4 5
9
2
Saídas:
1 2 9 3 4 5 0 0 0 0

*/

#include <iostream>

using namespace std;

int main() {
	int v[10]={0};
	int k, p, e;
	cin >> k;
	for (int i = 0; i < k; i++){
		cin >> v[i];
	}
	cin >> e;
	cin >> p;
	for (int i = 9; i >= p; i--){
		v[i]= v[i-1];
	}
	v[p]= e;
	for (int i = 0; i < 10; i++){
		cout << v[i] << " ";
	}

	return 0;
}
