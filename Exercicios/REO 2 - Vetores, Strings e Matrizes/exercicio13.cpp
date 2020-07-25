/* Questão 13: Matrizes - Movimento Cavalo

Faça um programa que receba o tamanho N e a matriz NxN. A matriz 
conterá os números 0 (vazio), 1 (cavalo), 2 (peões).

A matriz possuirá apenas um número 1, que reprensentará o cavalo como 
dito acima. Localize o "cavalo" e verifique quantos "peões" (2) o 
"cavalo" conseguirá eliminar, ou seja, de zero a oito peões 
posicionados ao redor do cavalo. O programa deverá escrever a quantidade
de peões que podem ser eliminados.

Movimentos possíveis do cavalo no xadrez


  1 2 3 4 5 6 7 8
1 O . O . O . O .
2 . O # O # O . O
3 O # O . O # O .
4 . O . @ . O . O
5 O # O . O # O .
6 . O # O # O . O
7 O . O . O . O .
8 . O . O . O . O

Entradas:

Tamanho da matriz (inteiro).
Tabuleiro do jogo (matriz de inteiros).
Saídas:

Quantos peões podem ser comidos (inteiro).
Exemplo de entradas:

5
2 0 0 2 2
0 2 0 2 2
0 0 1 2 2
2 2 2 0 0
0 0 0 0 0
Exemplo de saída:

3

*/

#include <iostream>

using namespace std;

int main() {
	int tamanho,contador=0;
	cin >> tamanho;
	int tabuleiro[tamanho][tamanho];
	for(int j = 0; j < tamanho; j++) {
		for(int i = 0; i < tamanho; i++) {
			cin >> tabuleiro[j][i];
		}
	}
	for(int j = 0; j < tamanho; j++) {
		for(int i = 0; i < tamanho; i++) {
			if(tabuleiro[j][i] == 1) {
				if((tabuleiro[j + 2][i + 1] == 2) && (j + 2 < tamanho) && (i + 1 < tamanho)) {
					contador++;
				}
				if((tabuleiro[j + 2][i - 1] == 2) && (j + 2 < tamanho) && (i - 1 >= 0)) {
					contador++;
				}
				if((tabuleiro[j - 2][i + 1] == 2) && (j - 2 >= 0) && (i + 1 < tamanho)) {
					contador++;
				}
				if((tabuleiro[j - 2][i - 1] == 2) && (j - 2 >= 0) && (i - 1 >= 0)) {
					contador++;
				}
				if((tabuleiro[j + 1][i + 2] == 2) && (j + 1 < tamanho) && (i + 2 < tamanho)) {
					contador++;
				}
				if((tabuleiro[j + 1][i - 2] == 2) && (j + 1 < tamanho) && (i - 2 >= 0)) {
					contador++;
				}
				if((tabuleiro[j - 1][i + 2] == 2) && (j - 1 >= 0) && (i + 2 < tamanho)) {
					contador++;
				}
				if((tabuleiro[j - 1][i - 2] == 2) && (j - 1 >= 0) && (i - 2 >= 0)) {
					contador++;
				}
			}
		}
	}
	cout << contador << endl;

	return 0;
}
