/* Questão 6: Ordenação Selection Sort e busca sequencial de vetor de registros - Figurinhas da Copa
Seus amigos descobriram que você "mexe com informática" e pediram para você fazer um programa para ajudar a organizar as figurinhas da copa que eles tem, para facilitar a troca. Para isso, você verifica que precisará implementar um algoritmo para cadastrar, ordenar e buscar valores num vetor de registros. Cada registro conterá os seguintes dados: nome do jogador (sem espaços), número da figurinha, quantidade de exemplares da figurinha. Como outro colega irá melhorar seu aplicativo, vocês decidem que o programa será construído utilizando módulos.

Assim, o programa deve ter módulos para:

ler valores, preenchendo o vetor de registros;
ordenar os elementos de um vetor, utilizando o número da figurinha como chave, utilizando Selection Sort;
procurar um elemento num vetor, usando busca sequencial, retornando sua posição no vetor.
Outros módulos são opcionais.

O módulo principal deve:

ler a quantidade de elementos a ser processada;
ativar o módulo que lê os elementos do vetor;
ler o valor procurado, no caso o número da figurinha;
ativar o módulo que ordena o vetor pelo número da figurinha;
ativar o módulo que busca um elemento num vetor, para procurar o elemento no vetor ordenado e depois escrever a posição do valor no vetor ordenado. Caso o elemento não esteja no vetor, a posição deve ser -1. Caso o elemento seja encontrado, imprimir ainda o nome do jogador e o número de cópias.
A ordem de entrada dos dados dos registros é a seguinte:

num_da_figurinha   nome_do_jogador   quantidade_de_copias
Exemplo de entrada:

6
1 joao_paulo 4
3 pedrovski 2
2 aslim_puerto 1
4 estibes 2
5 gloci 5
6 fernandao 2
3
Exemplo de saída:

2
pedrovski 2
Exemplo de entrada:

10
93 messi 50
100 pele 1
1 chapolin 1
24 maradona 101
12 zico 3
9 socrates 4
22 kant 8
13 nitichi 3
34 pedropaulo 4
51 boaideia 2
101
Exemplo de saída:

-1
Exemplo de entrada:

10
93 messi 50
100 pele 1
1 chapolin 1
24 maradona 101
12 zico 3
9 socrates 4
22 kant 8
13 nitichi 3
34 pedropaulo 4
51 boaideia 2
13
Exemplo de saída:

3
nitichi 3
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct FIGURINHA {   // Declara struct do tipo FIGURINHA num_da_figurinha   nome_do_jogador   quantidade_de_copias
	int numeroDaFigurinha;
	string nomeDoJogador;
	int quantidadeDeCopias;
} catalogoProdutos;   // Define um objeto do tipo FIGURINHA
vector<FIGURINHA> Figurinha;
// ordenar os elementos de um vetor, utilizando o número da figurinha como chave, utilizando Selection Sort;
void ordenarSelectionSort(int n) { // Selection Sort
	for(int k = 1; k < n; k++) {
		FIGURINHA temp = Figurinha[k];
		int j = k - 1;
		while(j >= 0 && temp.numeroDaFigurinha <= Figurinha[j].numeroDaFigurinha) {
			Figurinha[j + 1] = Figurinha[j];
			j = j - 1;
		}
		Figurinha[j + 1] = temp;
	}
}
// procurar um elemento num vetor, usando busca sequencial, retornando sua posição no vetor.
int buscaFigurinha(int busca, int n) { // Busca Sequencial
	for (int i = 0; i < n; i++) {
		if (Figurinha[i].numeroDaFigurinha == busca) {
			return i;
		}
	}
	return -1;
}
//ler valores, preenchendo o vetor de registros;
void preencheFigurinhas(int n) {
	FIGURINHA temp;
	for (int i = 0; i < n; i++) {
		cin >> temp.numeroDaFigurinha;
		cin >> temp.nomeDoJogador;
		cin >> temp.quantidadeDeCopias;
		Figurinha.push_back(temp);
	}
}
int main() {
	int quantidade;
	int numeroDaFigurinha;
	cin >> quantidade;
	preencheFigurinhas(quantidade);
	cin >> numeroDaFigurinha;
	ordenarSelectionSort(quantidade);
	int id = buscaFigurinha(numeroDaFigurinha, quantidade);
	cout << id << endl;
	if (id > 0) {
		cout << Figurinha[id].nomeDoJogador << " " << Figurinha[id].quantidadeDeCopias << endl;
	}
	return 0;
}
