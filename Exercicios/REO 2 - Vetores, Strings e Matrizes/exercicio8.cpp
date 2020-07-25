/* Questão 8: Matrizes - Itinerário

Os elementos de uma matriz quadrada A (de tamanho 4) representam os 
custos de transporte de uma cidade i para uma cidade j, onde i e j 
estão compreendidos no intervalo [0,3]. Dado um itinerário com k 
cidades, escreva um programa que calcule e exiba o custo total de 
transporte do itinerário.

Entradas:

Sequência de valores (números reais) representando os custos de 
transporte entre as cidades. Esta sequência de valores se destina ao 
preenchimento de uma matriz 4x4. Dada uma posição (x,y) na matriz, a 
linha representa a cidade de partida e a coluna representa a cidade de 
chegada. Obs: os valores de uma mesma linha estão separados entre si 
por um único espaço.
Um valor inteiro que representa a quantidade de cidades a serem 
consideradas em um percurso.
Sequência de valores (números inteiros), separados por um único espaço, 
que representa o itinerário percorrido com os identificadores das 
cidades (valores compreendidos no intervalo [0,3]) .
Saídas:

O custo total do percurso.
Exemplo de entrada:

4.5 1.0 2.0 33.3
5.0 2.2 1.5 40.0
2.1 3.1 2.3 18.2
72.3 11.0 22.4 50.1
8
0 3 1 3 3 2 1 0 
Exemplo de saída:

164.9

*/

#include <iostream>

using namespace std;

int main () {
	float custo[4][4], total = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> custo[i][j];
		}
	}
	int percurso;
	cin >> percurso;
	int itinerario[percurso];
	for (int i = 0; i < percurso; i++) {
		cin >> itinerario[i];
	}
	for (int j = 0; j < percurso - 1; j++) {
		total = total + custo[itinerario[j]][itinerario[j + 1]];
	}
	cout << total << endl;

	return 0;
}
