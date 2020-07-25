/* Questão 9: Modularização - Ordenação Selection Sort e busca/impressão em vetor de registros - Memes
Com a proximidade das férias, você resolveu fazer um programa para organizar seus memes. Para isso, você verifica que precisará implementar um algoritmo para cadastrar, ordenar e buscar valores num vetor de registros. Cada registro conterá os seguintes dados: número do meme, nome do arquivo (sem espaços), assunto (sem espaços) e site. Como você pretende futuramente expandir o aplicativo, o programa será construído utilizando módulos.

Assim, o programa deve ter módulos distintos para:

ler valores, preenchendo o vetor de registros;
ordenar os elementos de um vetor, utilizando o número do meme como chave, utilizando o algoritmo Selection Sort;
imprimir todos os memes de um dado site passado como parâmetro. A impressão deverá ser realizada no vetor já ordenado.
Outros módulos são opcionais.

O módulo principal deve:

ler a quantidade de elementos a ser processada;
ativar o módulo que lê os elementos do vetor;
ativar o módulo que ordena o vetor pelo número do meme;
ler o site para busca;
ativar o módulo que imprime os memes que pertençam a um dado site. Caso não exista nenhum meme daquele site, deverá ser impresso a mensagem Inexistente. Os dados do memes do site devem ser impressos seguindo a ordem do vetor já ordenado. Os campos deverão ser impressos na mesma ordem de leitura.
A ordem de entrada dos dados dos registros é a seguinte:

num_do_meme   nome_do_arquivo   assunto   site
Exemplo de entrada:

5
5 xxx.jpg minions 9gag
3 yyy.jpg funk nuintendo
2 zzz.jpg minions nuintendo
1 ppp.jpg funk 9gag
6 qqq.jpg politica facebook
9gag
Exemplo de saída:

1 ppp.jpg funk 9gag
5 xxx.jpg minions 9gag
Exemplo de entrada:

8 
91 1.jpg minions reddit
18 2.jpg minions 9gag
21 3.jpg minions facebook
45 4.jpg minions nuintendo
15 5.jpg temer capinaremos
55 6.jpg temer capinaremos
78 7.jpg temer facebook
9  8.jpg temer 9gag
4chan
Exemplo de saída:

NULL
Exemplo de entrada:

4
8 a.jpg trump 9gag
6 b.jpg trump 9gag
3 c.jpg trump 9gag
1 d.jpg trump 9gag
9gag
Exemplo de saída:

1 d.jpg trump 9gag
3 c.jpg trump 9gag
6 b.jpg trump 9gag
8 a.jpg trump 9gag 
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// número do meme, nome do arquivo (sem espaços), assunto (sem espaços) e site
struct MEME {   // Declara struct do tipo MEME 
	int numeroID;
	string nomeArquivo;
	string Assunto;
	string site;
} organizaMeme;   // Define um objeto do tipo MEME
vector<MEME> Meme; // Declara um vetor do tipo MEME

//ler valores, preenchendo o vetor de registros;
void preencheRegistros(int n){
	MEME temp;
	for (int i = 0; i < n; i++) {
		cin >> temp.numeroID;
		cin >> temp.nomeArquivo;
		cin >> temp.Assunto;
		cin >> temp.site;
		Meme.push_back(temp);
	}
}
//ordenar os elementos de um vetor, utilizando o número do meme como chave, utilizando o algoritmo Selection Sort;
void ordenarSelectionSort(int n){ // Selection Sort
	for(int k = 1; k < n; k++) {
		MEME temp = Meme[k];
		int j = k - 1;
		while(j >= 0 && temp.numeroID <= Meme[j].numeroID) {
			Meme[j + 1] = Meme[j];
			j = j - 1;
		}
		Meme[j + 1] = temp;
	}
}
//imprimir todos os memes de um dado site passado como parâmetro. A impressão deverá ser realizada no vetor já ordenado.
void imprimeMeme(string busca, int n){
	bool achou = false;
	for (int i = 0; i < n; i++) {
		if ( Meme[i].site == busca){
			cout << Meme[i].numeroID << " ";
			cout << Meme[i].nomeArquivo << " ";
			cout << Meme[i].Assunto << " ";
			cout << Meme[i].site << endl;
			achou = true;
		}
	}
	if (!achou) cout << "Inexistente";
}
// principal
int main() {
	int quantidadeElementos;
	cin >> quantidadeElementos;
	preencheRegistros(quantidadeElementos);
	ordenarSelectionSort(quantidadeElementos);
	string site;
	cin >> site;
	imprimeMeme(site, quantidadeElementos);
	return 0;
}
