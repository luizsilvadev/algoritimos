/* Questão 4: Registros - Ponto dentro dos retângulos
Considerando a utilização de um registro, com coordenadas X e Y, para representar um ponto P no plano cartesiano, implemente um programa que, dado um conjunto N de retângulos, indique a quantidade dos mesmos nos quais o ponto P se encontra dentro de suas áreas. Defina um retângulo como um registro de dois campos do tipo Ponto, representando o vértice inferior esquerdo V1 e o vértice superior direito V2. Obs: considere que os retângulos são paralelos aos eixos cartesianos.

Entradas:

Dois inteiros representando as coordenadas (x,y) do ponto P no plano cartesiano.
Um número inteiro representando a quantidade de retângulos a serem analisados.
Sequência de valores inteiros representando as coordenadas dos vértices V1 e V2 de cada retângulo a ser analisado. Note que serão lidos 4 números inteiros para cada retângulo do problema, de modo que os dois primeiros números se referem as coordenadas (x,y) de V1 e os dois números seguintes as coordenadas (x,y) de V2.
Saídas:

Número inteiro que indica a quantidade de retângulos cujo ponto P se encontra dentro das áreas dos respectivos retângulos.
Exemplo de entrada:

2 3
4
1 1 3 3
2 1 5 5
0 0 2 2
3 5 7 8
Exemplo de saída:

2
*/

#include <iostream>

using namespace std;

struct PONTO {   // Declara struct do tipo PONTO
	int x;
	int y;
} listaPontos;   // Declara objeto do tipo PONTO
struct RETANGULO {   // Declara struct do tipo RETANGULO
	PONTO v1;
	PONTO v2;
} listaRetangulos;   // Declara objeto do tipo RETANGULO

int main() {
	int p1, p2, qtdRetangulos, cont = 0;
	cin >> p1 >> p2;
	cin >> qtdRetangulos;
	RETANGULO Retangulo[qtdRetangulos];
	for (int i = 0; i < qtdRetangulos; i++) {
		cin >> Retangulo[i].v1.x;
		cin >> Retangulo[i].v1.y;
		cin >> Retangulo[i].v2.x;
		cin >> Retangulo[i].v2.y;
	}
	for (int i = 0; i < qtdRetangulos; i++) {
		if (Retangulo[i].v1.x <= p1 && 
			Retangulo[i].v1.y <= p2 && 
			Retangulo[i].v2.x >= p1 && 
			Retangulo[i].v2.y >= p2) {
			cont++;
		}
	}
	cout << cont;

	return 0;
}
