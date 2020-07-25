/* Questão 14: Strings - Letra não repetida

Faça um programa que dada um string de entrada, informa qual o primeiro 
caractere que não se repete.

Obs: Considere que sempre existirá pelo menos uma letra que não 
se repete.

Entradas:

Uma string.
Saídas:

Primeira letra que não se repete na string.
Exemplo de Entrada:

aabcade
Exemplo de Saída:

b

*/

#include <iostream>
#include <string>

using namespace std;

int main () {
	string texto;
	char letra;
	cin >> texto;
	int i = 0;int contador = 0;
	int tamanho = texto.size();
	while (i < tamanho){
		contador = 0;
		for (char v : texto){
			if (texto[i] == v) {
				contador++;
			}
		}
		if (contador == 1){
			letra = texto[i];
			i = tamanho;
		}
		else {
			i++;
		}
	}
	cout << letra;
	return 0;
}
