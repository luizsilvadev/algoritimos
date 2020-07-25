/* Questão 2: Registros - Stormtroopers de cada planeta
Em uma galáxia muito distante, a Primeira Ordem decidiu pressionar seus recrutadores de Stormtroopers de cada planeta para conseguir aumentar rapidamente seu exército. Para fazer isso, eles resolveram fazer um levantamento a fim de descobrir de quais planetas vinham as maiores contribuições para suas tropas.

Você foi recrutado pelos generais para o levantamento e para isso deve fazer um programa que leia um vetor de registros com os dados dos Stormtroopers. Cada registro deve ter os campos: nome, planeta de origem e número de batalhas que o Stormtrooper participou. O programa deverá então calcular, para cada planeta, o número de Stormtroopers que vieram de lá e a quantidade média de batalhas que eles participaram (guardando essas informações de cada planeta em um registro). Por fim, o programa deverá exibir o vetor de registros com os dados dos planetas.

Obs1: os nomes dos planetas devem aparecer na ordem em que aparecem na entrada.

Obs2: nomes dos Stormtroopers e dos planetas não possuem espaço.

Obs3: para soluções em Python o programador deve utilizar uma estrutura de dados apropriada no lugar dos registros.

Entradas:

Quantidade de Stormtroopers que serão avaliados.
Sequência de valores para os registros de Stormtroopers, seguindo a ordem: nome, planeta de origem e número de batalhas.
Saídas:

Sequência dos valores dos registros de dados dos planetas, seguindo a ordem: nome do planeta, número de Stormtroopers e número médio de batalhas que eles participaram (separados por um único espaço).
Exemplo de entrada:

5
DX-578
Lothal
10
MB-223
Lothal
5
SP-475
Sullust
3
TK-626
Lothal
10
FN-2187
Unknown
4
Exemplo de saída:

Lothal 3 8.33333
Sullust 1 3
Unknown 1 4
*/

#include <iostream>
#include <string>

using namespace std;

struct STORMTROOPERS {   // Declara struct do tipo STORMTROOPERS 
	string nome;
	string planeta;
	int qtdBatalhas;
} listaStormtroopers;   // Declara um objeto do tipo STORMTROOPERS 
struct PLANETADADOS {   // Declara struct do tipo PLANETADADOS 
	string nome;
	int participa = 0;
	float mediaBatalhas = 0;
} listaDadosPlanetas;   // Declara um objeto do tipo PLANETADADOS 

int main() {
	int qtdStormtroopers;
	cin >> qtdStormtroopers;
	STORMTROOPERS Stormtrooper[qtdStormtroopers];
	for (int i = 0; i < qtdStormtroopers; i++){
		cin >> Stormtrooper[i].nome;
		cin >> Stormtrooper[i].planeta;
		cin >> Stormtrooper[i].qtdBatalhas;
	}
	int temp = qtdStormtroopers;
	bool repetido = false;
	for (int i = 0; i < qtdStormtroopers; i++){
		for (int j = i + 1; j < qtdStormtroopers; j++){
			if(Stormtrooper[i].planeta == Stormtrooper[j].planeta){ 
				repetido = true;
			}
		}
		if(repetido == true){
			temp--;
		}
		repetido = false;
	}
	int k = 0;
	PLANETADADOS Planetas[temp];
	for (int i = 0; i < qtdStormtroopers; i++){
		for (int j = 0; j < temp; j++){
			if(Stormtrooper[i].planeta == Planetas[j].nome){
				repetido = true;
			}
		}
		if(k < temp and repetido == false){
			Planetas[k].nome = Stormtrooper[i].planeta;
			k++;
		}
		repetido = false;
	}
	for(int i = 0; i < temp; i++){
		for(int j = 0; j < qtdStormtroopers; j++){
			if(Planetas[i].nome == Stormtrooper[j].planeta){
				Planetas[i].participa++;
			}
		}
	}
	for(int i = 0; i < temp; i++){
		for(int j = 0; j < qtdStormtroopers; j++){
			if(Planetas[i].nome == Stormtrooper[j].planeta){
				Planetas[i].mediaBatalhas += Stormtrooper[j].qtdBatalhas;
			}
		}
	}
	for(int i = 0; i < temp; i++){
		Planetas[i].mediaBatalhas = Planetas[i].mediaBatalhas / Planetas[i].participa;
	}
	for(int i = 0; i < temp; i++){
		cout << Planetas[i].nome << " " << Planetas[i].participa << " "
			 << Planetas[i].mediaBatalhas << endl;
	}

	return 0;
}
