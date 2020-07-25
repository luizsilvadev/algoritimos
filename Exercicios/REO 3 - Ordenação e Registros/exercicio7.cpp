/* Questão 7: Ordenação - Ordenar Produtos (registros, módulos, Insertion Sort)
Faça um programa que lê dados de vários produtos, ordena-os e escreve aqueles que estiverem dentro de uma faixa de preços.

Inicialmente o programa deverá ler a quantidade de produtos que deve ser lida. Cada produto deve ser representado por um registro que tem identificador (número inteiro), descrição (sequência de caracteres - 79 caracteres são suficientes) e preço (número real). Os campos dos produtos devem ser lidos na ordem mencionada anteriormente, sendo que podem haver espaços na descrição do produto. Considere que cada um dos campos será digitado numa linha e que pode haver uma linha em branco entre os produtos.

Após a leitura, os produtos deverão ser ordenados por preço. Depois o programa deverá ler um preço mínimo e um máximo. Por fim, o programa deverá escrever em ordem crescente de preço todos os produtos cujo preço está no intervalo determinado. O intervalo é fechado em ambos os limites. Se não houver produtos no intervalo informado o programa deverá escrever na saída padrão Inexistente.

O programa deverá fazer uso de modularização. É obrigatório o uso do InsertionSort para fazer a ordenação.

Dica: para descartar um final de linha antes da leitura de uma linha, evitando assim a leitura de uma string vazia para uma linha, na linguagem C++, recomenda-se o uso do comando ignore, como em cin.ignore(2, '\n') que ignora até dois caracteres na tentativa de encontrar um final de linha.

Entradas:

O número de produtos
Os dados de cada produto
O identificador do produto (número inteiro)
A descrição do produto (pode conter espaços - não terá mais que 79 caracteres)
O preço do produto (número real)
O limite inferior da faixa de preços (número real)
O limite superior da faixa de preços (número real)
Saídas:

Os dados de cada produto cujo preço está no intervalo determinado, do produto de menor preço para o produto de maior preço. Todos os campos do produto deverão ser escritos na ordem mencionada acima, numa mesma linha separados por espaços. O programa deverá escrever aspas em volta da descrição do produto.
Exemplo de Entrada:

3

4352
Lancheira Sestini
99.90

3641
Mochila 14 Xeryus
149.90

3556
Compasso 559 Basic Flex
33.90

40
200
Exemplo de Saída:

4352 "Lancheira Sestini" 99.9
3641 "Mochila 14 Xeryus" 149.9
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;
//identificador (número inteiro), descrição (sequência de caracteres - 79 caracteres são suficientes) e preço (número real)
struct PRODUTO {   // Declara struct do tipo PRODUTO 
	int numeroID;
	string descricao;
	float preco;
} catalogoProdutos;   // Define um objeto do tipo PRODUTO

void ordenarProdutos(PRODUTO Produto[], int n) { // Insertion Sort
	for(int k = 1; k < n; k++) {
		PRODUTO temp = Produto[k];
		int j = k - 1;
		while(j >= 0 && temp.preco <= Produto[j].preco) {
			Produto[j + 1] = Produto[j];
			j = j - 1;
		}
		Produto[j + 1] = temp;
	}
}

int main() {
	int qtdProdutos;
	float limiteInferior;
	float limiteSuperior;
	cin >> qtdProdutos;
	PRODUTO Produtos[qtdProdutos]; // Declara um vetor do tipo PRODUTO
	for (int i = 0; i < qtdProdutos; i++) {
		cin >> Produtos[i].numeroID;
		cin.ignore();
		getline(cin, Produtos[i].descricao);
		Produtos[i].descricao = Produtos[i].descricao.substr(0, 79);
		cin >> Produtos[i].preco;
	}
	ordenarProdutos(Produtos, qtdProdutos);
	cin >> limiteInferior;
	cin >> limiteSuperior;
	bool achou = false;
	for (int i = 0; i < qtdProdutos; i++) {
		if (Produtos[i].preco >= limiteInferior && Produtos[i].preco <= limiteSuperior){
			cout << Produtos[i].numeroID << " ";
			cout << "\"" << Produtos[i].descricao << "\" ";
			cout << Produtos[i].preco << endl;
			achou = true;
		}
	}
	if (!achou) cout << "Inexistente";

	return 0;
}
