/* Questão 1: Registros - Doadores de Sangue
Faça um programa que leia n doadores de sangue (nome e tipo sanguíneo), após isso leia um determinado tipo sanguíneo. O algoritmo deve mostrar quais pessoas podem doar sangue para este tipo sanguíneo. Obs: O algoritmo deve mostrar na ordem de melhor compatibilidade.

● Para um paciente que necessita do tipo sanguíneo A, a ordem dos tipos sanguíneos de melhor compatibilidade (da melhor para menor) são: A e O.

● Para um paciente que necessita do tipo sanguíneo B, a ordem dos tipos sanguíneos de melhor compatibilidade (da melhor para menor) são: B e O.

● Para um paciente que necessita do tipo sanguíneo AB, a ordem dos tipos sanguíneos de melhor compatibilidade (da melhor para menor) são: AB, A, B e O.

● Para um paciente que necessita do tipo sanguíneo O, a ordem dos tipos sanguíneos de melhor compatibilidade (da melhor para menor) são: O.

Entradas:

Um número inteiro (int) que represente a quantidade de doadores.
Nome do doador (string), tipo sanguíneo (string).
Tipo sanguíneo a comparar(string).
Saídas:

Ordem de melhor compatibilidade.
Exemplo de Entrada:

10  
Jorge O  
Luiza AB  
Sara A  
Elder B  
Matheus A  
Gabriela AB  
Laiz A  
Talita O  
Simone O  
Ana AB  
AB 
Exemplo de Saída:

Luiza
Gabriela  
Ana  
Sara  
Matheus  
Laiz  
Elder  
Jorge  
Talita  
Simone
*/

#include <iostream>
#include <string>

using namespace std;

struct DOADOR {   // Declara struct do tipo DOADOR 
	string nome;
	string tipoSangue;
} listaDoadores;   // Define um objeto do tipo DOADOR

int main() {
	int qtdDoadores;
	string tipoSangueComparar;
	cin >> qtdDoadores;
	DOADOR Doador[qtdDoadores]; // Declara um vetor do tipo DOADOR
	for (int i = 0; i < qtdDoadores; i++) {
		cin >> Doador[i].nome;
		cin >> Doador[i].tipoSangue;
	}
	cin >> tipoSangueComparar;
	if(tipoSangueComparar == "A") {
		for (int i = 0; i < qtdDoadores; i++) {
			if(Doador[i].tipoSangue == "A") {
				cout << Doador[i].nome << endl;
			}
		}
		for ( int i = 0; i < qtdDoadores; i++) {
			if (Doador[i].tipoSangue == "O") {
				cout << Doador[i].nome << endl;
			}
		}
	} else if(tipoSangueComparar == "B") {
		for (int i = 0; i < qtdDoadores; i++){ 
			if(Doador[i].tipoSangue == "B") {
				cout << Doador[i].nome << endl;
			}
		}
		for ( int i = 0; i < qtdDoadores; i++) {
			if (Doador[i].tipoSangue == "O") {
				cout << Doador[i].nome << endl;
			}
		}
	} else if(tipoSangueComparar == "O") {
		for (int i = 0; i < qtdDoadores; i++) {
			if(Doador[i].tipoSangue == "O") {
				cout << Doador[i].nome << endl;
			}
		}
	} else if(tipoSangueComparar == "AB") {
		for (int i = 0; i < qtdDoadores; i++) {
			if(Doador[i].tipoSangue == "AB") {
				cout << Doador[i].nome << endl;
			}
		}
		for ( int i = 0; i < qtdDoadores; i++) {
			if (Doador[i].tipoSangue == "A") {
				cout << Doador[i].nome << endl;
			}
		}
		for ( int i = 0; i < qtdDoadores; i++) {
			if (Doador[i].tipoSangue == "B") {
				cout << Doador[i].nome << endl;
			}
		}
		for ( int i = 0; i < qtdDoadores; i++) {
			if (Doador[i].tipoSangue == "O") {
				cout << Doador[i].nome << endl;
			}
		}
	}

	return 0;
}
