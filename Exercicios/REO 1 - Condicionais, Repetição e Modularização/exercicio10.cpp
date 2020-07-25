#include <iostream>
#include <iomanip>
using namespace std;
double calculaParcelas(int parcelas) {
	double soma = 0.0;
	double n = 1;
	while (n <= parcelas) {
		soma = soma + (n*(n+1))/(n+3);
		n++; 
	}
	return soma;
}
int main() {
	int parcelas;
	cin >> parcelas;
	cout << fixed << setprecision(1);
	cout << calculaParcelas(parcelas) << endl;
	return 0;
}
/* Correção manual. É curioso como você se deu ao trabalho de limitar a 
precisão de saída a uma única casa decimal com um enunciado que pede 
um resultado com precisão dupla (mais de 7 algarismos significativos).
O uso de ponto flutuante em contadores (n) é perigoso. */
