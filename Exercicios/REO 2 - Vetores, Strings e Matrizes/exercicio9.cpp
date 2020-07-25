/* Questão 9: Matrizes - Soma dos Quadrantes

Dada uma matriz M, uma linha i e uma coluna j, traçar uma reta sobre a 
linha i e uma reta sobre a coluna j divide a matriz em quatro 
quadrantes. Você deve fazer um programa que recebe M, i e j, e um 
quadrante e exibe a soma dos elementos daquele quadrante. Os elementos 
da linha e da coluna não devem entrar na soma. Os quadrantes serão 
identificados pelos números 1, 2, 3 e 4. O quadrante 1 é o quadrante 
superior à esquerda. O quadrante 2 é o quadrante superior à direita. 
O quadrante 3 é o quadrante inferior à esquerda. O quadrante 4 é o 
quadrante inferior à direita.

Entradas:

Inteiros L e C representando, respectivamente, os números de linhas e 
colunas da matriz
Matriz de inteiros M
Inteiros i e j, correspondentes a uma linha e uma coluna da matriz, 
respectivamente
Inteiro q, identificador do quadrante
Saídas:

Soma dos elementos do quadrante especificado
Exemplo Básico

Exemplo de entrada:

3 3 
1 0 2 
0 0 0
3 0 4
1 1
3

Exemplo de Saída:

3

Exemplos Adicionais

Exemplo 0

Exemplo de entrada:

9 9
2 2 9 6 7 4 3 7 2 
4 9 5 3 7 5 8 5 4 
3 8 9 9 8 2 8 9 9 
7 5 3 3 1 6 7 2 8 
5 3 3 6 5 1 3 1 5 
2 4 1 1 3 7 1 6 6 
3 6 8 3 7 9 6 2 6 
6 8 7 7 7 5 4 1 5 
4 7 9 6 8 9 6 7 1 
7 4
3

Exemplo de Saída:

26

Exemplo 1

Exemplo de entrada:

9 9
8 3 9 7 6 4 2 8 8 
3 4 1 3 2 6 4 9 7 
2 6 6 2 8 6 3 2 3 
2 9 1 5 2 8 7 1 8 
2 4 2 3 2 6 7 7 8 
8 8 8 6 5 1 8 3 8 
8 9 3 3 4 1 3 8 3 
1 1 4 9 7 1 3 5 2 
5 8 2 3 5 1 8 8 7 
1 4
1

Exemplo de Saída:

27

Exemplo 2

Exemplo de entrada:

9 9
9 3 3 4 8 4 3 7 2 
7 6 6 6 2 8 4 2 5 
6 6 9 5 1 4 2 7 5 
7 1 1 4 5 5 5 6 5 
2 9 6 4 3 3 2 6 9 
1 2 1 7 4 8 9 3 7 
9 3 9 2 2 9 8 4 3 
3 3 2 1 4 6 7 2 2 
4 3 3 2 1 6 7 5 4 
2 4
4

Exemplo de Saída:

131

Exemplo 3

Exemplo de entrada:

8 7
2 8 6 3 8 5 2 
7 6 3 7 2 6 3 
2 7 2 2 9 1 2 
8 8 3 3 2 9 4 
7 6 4 8 4 4 6 
8 3 2 7 4 2 9 
6 4 6 6 6 6 9 
9 7 8 3 8 2 9 
0 1
3

Exemplo de Saída:

47

*/

#include <iostream>

using namespace std;

int main () {
	int L, C, l, c, q;
	cin >> L >> C;
	int M[L][C];
	int soma = 0;
	for (int i = 0; i < L; i++){
		for (int j = 0; j < C; j++){
			cin >> M[i][j];
		}
	}
	cin >> l >> c >> q;
	for (int i = 0; i < L; i++){
		for (int j = 0; j < C; j++){
			if (q == 1){
				if (i < l and j < c) soma = soma + M[i][j];
			} else if (q == 2){
				if (i < l and j > c) soma = soma + M[i][j];
			} else if (q == 3){
				if (i > l and j < c) soma = soma + M[i][j];
			} else if (q == 4){
				if (i > l and j > c) soma = soma + M[i][j];
			} else {
				soma = -1;
			}
		}
	}
	cout << soma;
	
	return 0;
}

