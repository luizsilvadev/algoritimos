/* Questão 10: Matrizes - Soma dos Elementos da Esquerda

Vamos chamar de área esquerda de uma matriz os elementos posicionados 
conforme mostrado no desenho a seguir (área azul).

  0 1 2 3 4 5 6 7 8 9
0 O . . . . . . . . O
1 A O . . . . . . O .
2 A A O . . . . O . .
3 A A A O . . O . . .
4 A A A A O O . . . .
5 A A A A O O . . . .
6 A A A O . . O . . .
7 A A O . . . . O . .
8 A O . . . . . . O .
9 O . . . . . . . . O

Faça um programa que receba o tamanho N de uma matriz quadrada e os 
elementos inteiros da matriz e calcule a soma dos elementos de sua 
área esquerda.

Entrada:

Valor de N que representa o tamanho da matriz quadrada.
Os elementos (inteiros) da matriz quadrada.
Saída:

Soma dos elementos da área esquerda da matriz.
Exemplo de Entrada:

6
6 8 5 6 0 6
1 3 1 2 0 3
2 8 4 6 5 1
7 4 0 4 6 2
0 1 1 2 5 3
3 0 3 0 5 5
Exemplo de Saída:

22

*/

#include <iostream>

using namespace std;

int main () {
	int N;
	cin >> N;
	int M[N][N];
	int soma = 0;
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			cin >> M[i][j];
		}
	}
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
				if (j < i && j < (N-i) - 1) soma += M[i][j];
		}
	}
	cout << soma;

	return 0;
}
