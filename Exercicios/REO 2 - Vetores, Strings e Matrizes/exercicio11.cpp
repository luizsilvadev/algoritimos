/* Questão 11: Matrizes - Alagamentos

Considere que uma região geográfica foi segmentada em sub-regiões 
quadradas, de forma que estas sub-regiões podem ser representadas 
usando matrizes quadradas. Será dada uma matriz em que cada célula 
representa a altura da sub-região correspondente. Sabe-se que regiões 
abaixo de uma altura h estão sujeitas a alagamento. É possível elevar 
a altura de uma sub-região a um custo c por cada unidade elevada. Faça 
um programa para determinar o mínimo a ser investido pelo governo para 
que não ocorram mais alagamentos.

Entradas:

Inteiro N representando as dimensões da matriz de alturas
Matriz NxN de números reais, representando as alturas
Número real h, abaixo do qual as regiões são alagadas
Número real c, representando o custo de elevação por unidade
Saídas:

Custo mínimo para que não ocorram mais alagamentos
Exemplo de Entrada:

3
1 2.5 3
0.5 2 4
3 2 1
2.5
10
Exemplo de Saída:

60.0

*/

#include <iostream>

using namespace std;

int main () {
	int N;
	cin >> N;
	float M[N][N], h, c, preco = 0.0;
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			cin >> M[i][j];
		}
	}
	cin >> h >> c;
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++){
			if (h - (M[i][j])> 0)
				preco += (h - M[i][j]) * c;
		}
	}
	cout << preco;

	return 0;
}
