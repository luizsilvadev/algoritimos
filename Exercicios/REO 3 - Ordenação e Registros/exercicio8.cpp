/* Questão 8: Modularização - Pagamento de pessoal (registros, ordenação com Bubble Sort) (tamanho definido)
Faça um programa que controla salários de funcionários. Ele deve ler dados a respeito de vários funcionários, calcular o salário de cada um e escrever os dados ordenados. A quantidade de funcionários que terão seu salário calculado deve ser informada pelo usuário.

Os dados importantes na representação de um funcionário são (utilizar registros):

identificador do funcionário (número inteiro),
número de horas trabalhadas (número real),
valor de uma hora trabalhada (número real) e
salário a receber (número real).
Deve existir um subprograma que realiza a leitura dos dados, na mesma ordem vista acima. Ele deve ser usado sempre que outro subprograma precisar fazer tal leitura. Entretanto, o salário a receber não deve ser realmente lido, ele deve ser calculado a partir dos valores lidos para o número de horas trabalhadas e o valor de uma hora trabalhada. No seu programa, este subprograma deve ser usado pelo subprograma principal, responsável por ler todos os funcionários num laço.

Também deve existir um subprograma que ordena funcionários (ordem crescente) pelo salário a receber, utilizando o algoritmo de ordenação Bubble Sort. Ele deve servir para ordenar qualquer quantidade de funcionários. Depois deve escrever os dados de todos funcionários em ordem.

Entradas:

Quantidade de funcionários.
Dados de vários funcionários. Os dados não incluem o salário a receber.
Saídas:

O identificador e o salário a receber de cada funcionário (nesta ordem), ordenados pelo salário a receber (ordem crescente).
Exemplo de entrada:

3
12 80.1 14.9      
11 76.1 12.2
14 82.6 11.8
Exemplo de saída:

11 928.42
14 974.68
12 1193.49
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct FUNCIONARIO {   // Declara struct do tipo FUNCIONARIO 
	int numeroID;
	float horasTrabalhadas;
	float valorDaHora;
	float salario;
} organizaFuncionario;   // Define um objeto do tipo FUNCIONARIO
vector<FUNCIONARIO> Funcionario; // Declara um vetor do tipo FUNCIONARIO

void preencheRegistros(int n){
	FUNCIONARIO temp;
	for (int i = 0; i < n; i++) {
		cin >> temp.numeroID;
		cin >> temp.horasTrabalhadas;
		cin >> temp.valorDaHora;
		temp.salario = temp.horasTrabalhadas * temp.valorDaHora;
		Funcionario.push_back(temp);
	}
}

void ordenarFuncionarios(int n) { // Bubble Sort
    int k, j;
    FUNCIONARIO temp;
    for (k = n - 1; k > 0; k--) {
        for (j = 0; j < k; j++) {
            if (Funcionario[j].salario > Funcionario[j + 1].salario) {
                temp = Funcionario[j];
                Funcionario[j] = Funcionario[j + 1];
                Funcionario[j + 1] = temp;
            }
        }
    }
}

void imprimeFuncionarios(int n){
	for (int i = 0; i < n; i++) {
		cout << Funcionario[i].numeroID << " ";
		cout << Funcionario[i].salario << endl;
	}
}

int main() {
	int qtdFuncionario;
	cin >> qtdFuncionario;
	preencheRegistros(qtdFuncionario);
	ordenarFuncionarios(qtdFuncionario);
	imprimeFuncionarios(qtdFuncionario);

	return 0;
}
