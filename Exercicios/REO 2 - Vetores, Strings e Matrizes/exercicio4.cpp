/* Questão 4: Vetores - Busca sequencial - String

Faça um programa que procura um texto dentro de outro texto, sem 
utilizar qualquer função ou método auxiliar (ou seja: a busca deve 
ser manual).

O programa deve informar a posição da primeira ocorrência do texto 
procurado. Caso o texto procurado não seja encontrado, a posição 
informada deverá ser -1 para indicar essa situação especial.

O textos terão no máximo 254 caracteres. Todos os caracteres do texto 
serão não-brancos.

Entradas:

O texto no qual será realizada a busca,
O texto que será buscado no anterior.
Saída:

a posição em que o texto procurado começou a ser encontrado no outro 
texto, ou -1 se ele não for encontrado.
Exemplo de entrada:

aabcbcbbacbbaa
cbb

Exemplo de saída:

5

*/

#include <iostream>
#include <string>

using namespace std;

int buscaTexto(string texto, string busca) {
	int qtdTexto = texto.size();
	int tamBusca = busca.size();
	char letraBusca[tamBusca];
	int posicao = 0;
	int txtID = 0;
	bool encontrou = false;
	for (int j = 0; j <= qtdTexto - tamBusca; j++) {
		for (int i = 0; i < tamBusca; i++) {
			letraBusca[i] = texto[txtID];
			txtID++;
		}
		txtID = txtID - (tamBusca - 1);
		int aux = 0;
		for (int i = 0; i < tamBusca; i++) {
			if (letraBusca[i] == busca[i]) {
				aux++;
			}
		}
		if (aux == (tamBusca)) {
			encontrou = true;
		}
		if (encontrou == false) {
			posicao++;
		}
	}
	if (encontrou == true) {
		return posicao;
	} else {
		return -1;
	}
}

int main() {
	string texto, busca;
	cin >> texto >> busca;
	cout << buscaTexto(texto, busca);

	return 0;
}
