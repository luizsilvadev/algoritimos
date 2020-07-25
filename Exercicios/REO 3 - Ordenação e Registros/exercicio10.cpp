/* Questão 10: Registro - Insertion Sort - Entrega de Pizzas

Uma pizzaria precisa entregar mais pizzas que estava planejando. Entretanto, para agilizar as entregas, seu motoboy atenderá somente os N clientes mais próximos da pizzaria. Como saída, o programa deverá retornar a soma do valor das pizzas nos N clientes mais próximos da pizzaria.

Lembre: N é somente uma porção de clientes de um total de clientes que serão fornecidos na entrada.

Para cada cliente, a pizzaria possui os seguintes dados (usar um registro):

Nome do cliente (string)
Coordenada x do cliente (inteiro)
Coordenada y do cliente (inteiro)
Distância da pizzaria (inteiro)
Valor da pizza (real) .
Para cada cliente, deverá ser criado um registro com os dados acima, e a ordenação deverá ser feita usando o algoritmo InsertionSort. Não haverá clientes com distância repetida.

Dica: A distância entre dois pontos pode ser calculada por: sqrt [(x1-x2)^2 + (y1-y2)^2]

Entradas:

Número de clientes que serão atendidos
Coordenada x da pizzaria
Coordenada y da pizzaria
Número total de clientes
Nome cliente 1
Coordenada x do cliente 1
Coordenada y do cliente 1
Valor da pizza do cliente 1
Nome cliente 2
Coordenada x do cliente 2
Coordenada y do cliente 2
Valor da pizza do cliente 2
...
Saídas :

Soma do valor das pizzas dos N clientes mais próximos da pizzaria
Exemplo de Entrada:

2
5 
5 
3
Joao 
10 
5 
22.50 
Lucas 
15 
30 
32.00 
Maria 
20 
10 
21.00 
Exemplo de Saída:

43.50 
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct CLIENTE {   // Declara struct do tipo CLIENTE 
	string nome;
	int coordenadaX;
	int coordenadaY;
	float valorPizza;
	int distancia;
} clientesPizzaria;   // Define um objeto do tipo CLIENTE

int calculaDistanciaEntreDoisPontos(int x1, int y1, int x2, int y2) {
	return floor(sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)));
}

int main() {
	int clientesAtendidos;
	int coordenadaXPizzaria;
	int coordenadaYPizzaria;
	int totalDeClientes;
	cin >> clientesAtendidos >> coordenadaXPizzaria >> coordenadaYPizzaria >> totalDeClientes;
	CLIENTE Cliente[totalDeClientes]; // declara uma variavel do tipo CLIENTE
	for (int i = 0; i < totalDeClientes; i++) {
		cin >> Cliente[i].nome;
		cin >> Cliente[i].coordenadaX;
		cin >> Cliente[i].coordenadaY;
		cin >> Cliente[i].valorPizza;
		Cliente[i].distancia = calculaDistanciaEntreDoisPontos(coordenadaXPizzaria, coordenadaYPizzaria, Cliente[i].coordenadaX, Cliente[i].coordenadaY);
	}
	for(int k = 1; k < totalDeClientes; k++) { // Insertion Sort
		CLIENTE temp = Cliente[k];
		int j = k - 1;
		while(j >= 0 && temp.distancia <= Cliente[j].distancia) {
			Cliente[j + 1] = Cliente[j];
			j = j - 1;
		}
		Cliente[j + 1] = temp;
	}
	float valorTotal = 0;
	for(int i = 0;i < clientesAtendidos; i++) {
		valorTotal += Cliente[i].valorPizza;
	}
	cout << endl << valorTotal << endl;

	return 0;
}
