/* Questão 3: Registros e Subprogramas - Líder de Ginásio
Uma grande batalha para se tornar o novo líder de um ginásio Pokémon está prestes a acontecer. Faça um programa que irá gerenciar as batalhas do ginásio, para isso crie um registro Pokemon que deverá possuir três campos, sendo eles: uma string representando o nome de um dado Pokémon, um número inteiro representando a força de ataque do Pokémon e, por último, um número inteiro representando seu poder de defesa. Além disso, crie um segundo registro chamado Treinador para representar um treinador Pokémon, este registro deverá possuir apenas dois campos. O primeiro campo deve ser uma string representando o nome do treinador e o segundo campo deve ser utilizado para indicar os Pokémons que o treinador possui. Assuma, para simplificação, que cada treinador terá ao todo três Pokémons.

Além do subprograma principal, que será responsável por toda entrada e saída de dados, desenvolva um segundo subprograma (do tipo procedimento) chamado duelo que deverá receber como parâmetro duas variáveis do tipo Treinador. A primeira variável representará um treinador que está tentando conquistar o ginásio. A segunda variável representará o treinador que está defendendo o título de líder de ginásio. O subprograma duelo deverá retornar por referência o Pokémon com o maior ataque do treinador atacante e o Pokémon com a maior defesa do treinador que é o atual líder de ginásio (utilize parâmetros adicionais para a passagem por referência).

Inicialmente, seu programa deverá ler do dispositivo de entrada padrão um número inteiro N que indica quantos treinadores poderão participar da batalha pelo ginásio. Em seguida, deverão ser lidas da entrada padrão, e armazenadas em um vetor de tamanho N, as informações de todos os treinadores. Estas informações serão fornecidas na ordem: nome do treinador e sequência dos dados de seus Pokémons. Os dados dos Pokémons serão fornecidos, por sua vez, na ordem: nome do Pokémon, força de ataque e poder de defesa. Assuma que não haverá espaços em todos os nomes fornecidos.

Em seguida, seu programa deverá ler dois números inteiros A e B do dispositivo de entrada padrão, compreendidos no intervalo [0,N-1]. O inteiro A representa o índice do treinador (i.e.: posição ou subscrito no vetor de entrada) que está pedindo um duelo com o atual líder do ginásio. O inteiro B representa o índice do treinador que é o atual líder do ginásio. Seu programa deverá então chamar o subprograma duelo e a partir dos dados retornados exibir no dispositivo de saída padrão o nome do treinador que ganhou a batalha de Pokémons e o nome do Pokémon que o treinador utilizou. Assuma que o treinador desafiante vencerá o duelo caso a força de ataque de seu melhor Pokémon atacante for maior do que o poder de defesa do melhor Pokémon defensivo do atual líder do ginásio. Caso contrário, o vencedor do duelo é o atual líder do ginásio.

Entradas:

Inteiro N representando a quantidade de treinadores.
Sequência das informações dos treinadores, na ordem: nome do treinador, dados dos seus três Pokémons. Os dados dos Pokémons serão fornecidos na ordem: nome do Pokémon, força de ataque e poder de defesa.
Inteiro A representando o índice do treinador desafiante.
Inteiro B representando o índice do atual líder do ginásio.
Saídas:

Nome do treinador que venceu a batalha.
Nome do Pokémon que foi utilizado no duelo.
Exemplo de Entrada:

3 

Janderson
Rattata
13
10
Zubat
8
10
Psyduck
15
20

Julio
Bulbasaur
20
17
Charizard
30
30
Pidgeotto
15
13

Raphael
Squirtle
13
16
Vulpix
20
15
Kadabra
29
25

0 1
Exemplo de Saída:

Julio 
Charizard
*/

#include <iostream>
#include <string>

using namespace std;

struct POKEMON {   // Declara struct do tipo POKEMON
	string nome;
	int pontosAtaque;
	int pontosDefesa;
} listaPokemons;   // Declara objeto do tipo POKEMON
struct TREINADOR {   // Declara struct do tipo TREINADOR
	string nome;
	POKEMON Pokemon[3];
} listaTreinadores;   // Declara objeto do tipo TREINADOR
int treinadorDesafiante, treinadorLider, temp1 = 0, temp2 = 0;
void dadosTreinadoresPokemons(TREINADOR Treinador[], int n){
	for (int j = 0; j < n; j++){
		cin >> Treinador[j].nome;
		for (int i = 0; i < 3; i++){
			cin >> Treinador[j].Pokemon[i].nome;
			cin >> Treinador[j].Pokemon[i].pontosAtaque;
			cin >> Treinador[j].Pokemon[i].pontosDefesa;
		}
	}
}
void duelo(TREINADOR vTreinador[], int treinadorA, int treinadorB){
	treinadorDesafiante = vTreinador[treinadorA].Pokemon[0].pontosAtaque;
	treinadorLider = vTreinador[treinadorB].Pokemon[0].pontosDefesa;
	for(int i = 1; i < 3; i++){
		if (treinadorDesafiante < vTreinador[treinadorA].Pokemon[i].pontosAtaque){
			treinadorDesafiante = vTreinador[treinadorA].Pokemon[i].pontosAtaque;
			temp1 = i;
		}
		if (treinadorLider < vTreinador[treinadorB].Pokemon[i].pontosDefesa){
			treinadorLider = vTreinador[treinadorB].Pokemon[i].pontosDefesa;
			temp2 = i;
		}
	}
}
int main() {
	int qtdTreinadores, treinadorA, treinadorB;
	cin >> qtdTreinadores;
	TREINADOR Treinador[qtdTreinadores];
	dadosTreinadoresPokemons(Treinador, qtdTreinadores);
	cin >> treinadorA;
	cin >> treinadorB;
	duelo(Treinador, treinadorA, treinadorB);
	if(treinadorLider < treinadorDesafiante){
		cout << Treinador[treinadorA].nome << endl << Treinador[treinadorA].Pokemon[temp1].nome;
	} else {
		cout << Treinador[treinadorB].nome << endl << Treinador[treinadorB].Pokemon[temp2].nome;
	}

	return 0;
}
