/* Questão 5: Busca Binária - Última vacina (registros)
Faça um programa que determina a data da última vacina de um animal de estimação, usando busca binária.

Inicialmente o programa deve ler os dados já ordenados de vários animais de estimação. Depois deve ler a identificação de um deles e informar a data da sua última vacina.

Cada animal deve ser representado por um registro com:

Identificador (número inteiro),
Nome do animal (sequência de caracteres),
Nome do dono (sequência de caracteres),
Data da última vacina (data).
Cada data deve ser representada por um registro com dia, mês e ano (3 números inteiros, não usar vetor).

Entradas:

Os dados de vários animais de estimação, com cada item na ordem descrita acima, já em ordem crescente de identificador. Todos os dados de cada animal estarão numa única linha. O valor zero como identificador serve para indicar que não há mais dados de animais de estimação para ler.
Um identificador de um animal para busca.
Suponha que os nomes do animal e do seu dono não possuem espaços. Suponha que nunca será necessário cadastrar mais do que 100 animais. Suponha que nomes nunca possuem mais do que 50 caracteres. Suponha que as datas lidas nunca são inválidas. Em C++, é permitido usar o tipo string para representar os nomes.

Saídas:

O nome do animal,
a data da sua última vacina (use barras para separar o dia, mês e ano).
Caso o animal não esteja cadastrado, o programa deverá escrever apenas "inexistente" (minúsculas, sem as aspas).

Exemplo de Entrada:

1 Rex Joao 2 12 2015
2 Toto Maria 25 3 2014
3 Duquesa Carla 1 3 2016
7 Jupiter Wilson 19 11 2015
0
2
Exemplo de Saída:

Toto 25/3/2014
*/

#include <iostream>
#include <string>

using namespace std;

struct DATA {   // Declara struct do tipo DATA
	int dia;
	int mes;
	int ano;
} tipoData;   // Declara objeto do tipo DATA
struct ANIMAL {   // Declara struct do tipo ANIMAL
	int indice;
	string nome;
	string dono;
	DATA Data;
} listaAnimais;   // Declara objeto do tipo ANIMAL

int buscaBinaria(ANIMAL vAnimal[], int busca, int inicio, int fim) {
	if (inicio <= fim){
		int meio = (inicio + fim)/2;
		if (vAnimal[meio].indice == busca){
			return meio; 
		} else if (vAnimal[meio].indice > busca){
			fim = meio--;
		}
		else{
			inicio = meio++;
		}
		return buscaBinaria(vAnimal, busca, inicio, fim);
	} else {
		return -1;
	}
}

int main() {
	ANIMAL Animal[100];
	int i = 0;
	int temp = 1;
	while(temp != 0){
		cin >> Animal[i].indice;
		if(Animal[i].indice != 0) {
			cin >> Animal[i].nome;
			//Animal[i].nome = Animal[i].nome.substr(0, 49);
			cin >> Animal[i].dono;
			//Animal[i].dono = Animal[i].dono.substr(0, 49);
			cin >> Animal[i].Data.dia;
			cin >> Animal[i].Data.mes;
			cin >> Animal[i].Data.ano;
			temp = Animal[i].indice;
			i++;
		} else {
			temp = 0;
		}
	}
	int busca;
	int id = -1;
	cin >> busca;
	id = buscaBinaria(Animal, busca, 0, i-1);
	if(id != -1){
		cout << Animal[id].nome << " ";
		cout << Animal[id].Data.dia << "/";
		cout << Animal[id].Data.mes << "/";
		cout << Animal[id].Data.ano;
	} else {
		cout << "inexistente";
	}

	return 0;
}
