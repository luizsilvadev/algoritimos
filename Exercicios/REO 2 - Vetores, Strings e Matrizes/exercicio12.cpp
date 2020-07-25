/* Questão 12: Matrizes - Instalação de Estátua

A prefeitura de uma cidade deseja instalar uma estátua em uma praça e 
precisa determinar o melhor local. A praça foi analisada para determinar
a estabilidade dos pontos. O resultado da análise será fornecido em 
uma matriz quadrada, que representa a praça. Cada célula da matriz 
corresponde a um pedaço de 1 metro quadrado e possui valores 0 ou 1. 
O valor 0 representa um quadrado estável. O valor 1 representa um 
quadrado instável. Faça um programa para determinar em quantos locais 
diferentes a estátua poderia ser instalada. A distância entre os pés 
da estátua é de 5 metros e cada pé deverá ser colocado em um quadrado 
estável. Portanto, cada pé deve estar em um quadrado com o valor 0 e 
deverão haver 3 quadrados entre os pés. Exemplo: 01110. A linha entre 
os pés deverá estar na horizontal.

Entradas:

Inteiro N representando as dimensões da matriz
Matriz M composta de 0s e 1s
Saídas:

Número de locais diferentes onde a estátua pode ser instalada
Exemplo de Entrada:

5
0 1 1 1 0
1 1 1 1 1
0 1 1 1 0
1 1 0 1 1
1 1 1 1 1
Exemplo de Saída:

2

*/


#include <iostream>

using namespace std;

int main() {
	int n, contador=0;
	cin >> n;
	int matriz[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> matriz[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 4; j++) {
			if (matriz[i][j] == 0 and matriz[i][j + 4] == 0){
				contador++;
			}
		}
	}
	cout << contador;

	return 0;
}
