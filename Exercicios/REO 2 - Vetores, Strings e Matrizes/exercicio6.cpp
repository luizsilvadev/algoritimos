/* Questão 6: Vetores - Remover um elemento do vetor

Faça um programa que leia um número inteiro positivo que indica a 
quantidade de elementos de um dado vetor de números inteiros. Em 
seguida seu programa deverá ler valores para todas as posições do vetor. 
Após a leitura dos valores dos elementos do vetor, seu programa deverá 
ler do dispositivo de entrada padrão um outro número inteiro que deverá 
ser removido do vetor, caso o mesmo se encontre presente. O primeiro 
valor encontrado no vetor que for igual ao elemento lido é o que deve 
ser removido. Após a remoção do elemento, o programa deve escrever no 
dispositivo de saída padrão todos os elementos do vetor. Caso o 
elemento a ser removido não pertença ao vetor, o programa deverá exibir 
a mensagem ELEMENTO NAO ENCONTRADO (letras maiúsculas e sem acentuação).

Ao remover o elemento do vetor, não é perdido que haja um espaço vazio 
no meio do vetor. Ou seja, ao final do processo de remoção, a posição 
livre do vetor deverá ser obrigatoriamente a última posição do vetor.

Não é permitido o uso de um segundo vetor auxiliar nesta questão.

Entradas:

A quantidade de elementos do vetor.
Os valores do vetor (números inteiros).
O valor a ser removido do vetor.
Saídas:

Sequência de N-1 números inteiros, caso o elemento X tenha sido removido
do vetor OU mensagem ELEMENTO NAO ENCONTRADO, caso o elemento X não 
seja um dos elementos do vetor.

Exemplo de entrada:

5 
13 49 23 6 21 
13 
Exemplo de saída:

49 23 6 21 
Exemplo de entrada:

5 
13 49 23 6 21 
31 
Exemplo de saída:

ELEMENTO NAO ENCONTRADO

*/

#include <iostream>

using namespace std;

int main() {
	int qtd, remover;
	cin >> qtd;
	int numeros[qtd];
	for(int i = 0; i < qtd; i++) {
		cin >> numeros[i];
	}
	cin >> remover;
	bool encontrado = false;
	for(int i = 0; i < qtd; i++) {
		if(numeros[i] == remover) {
			encontrado = true;
			while(i < qtd) {
				numeros[i] = numeros[i + 1];
				i++;
			}
			for(int i = 0; i < qtd - 1; i++) {
				cout << numeros[i] << " ";
			}
		}
	}
	if (encontrado == false) {
		cout << "ELEMENTO NAO ENCONTRADO" << endl;
	}

	return 0;
}
