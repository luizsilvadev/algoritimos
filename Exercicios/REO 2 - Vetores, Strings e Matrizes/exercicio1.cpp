/* Questão 1: tempoores - Melhor piloto

Dois pilotos resolveram se desafiar para saber quem faz o melhor 
tempo no Autódromo Internacional de Lavras. Sabe-se que a cada km a 
partir do km 1 é registrado o tempo do piloto. Faça um programa que 
receba o nome do piloto e os tempos registrados dos dois pilotos e 
imprima em uma linha quem estava na liderança a cada km e em outra 
linha quem fez o melhor tempo em cada trecho. O tempo de cada trecho 
é dado pelo tempo registrado no km atual menos o tempo registrado no 
km anterior, considere que no km 0 o tempo é 0.

Todas as comparações podem ser feitas supondo que não haverá empate.

Entradas:

Quantidade de km em que houve medição;
nome do primeiro piloto;
tempos do primeiro piloto em cada km (números reais, numa mesma linha);
nome do segundo piloto;
tempos do segundo piloto em cada km (números reais, numa mesma linha).
Saídas:

Nome do piloto na liderança a cada km;
Nome do piloto com o melhor tempo no último km.
Exemplo de Entrada:

5
Hudson
25.1 52.8 75.2 98.4 117.7
Bruno
24.9 53 75.3 97.6 118.1
Exemplo de Saída:

Bruno Hudson Hudson Bruno Hudson
Bruno Hudson Bruno Bruno Hudson

*/

#include <iostream>
#include <string>

using namespace std;

void imprime (int n, string p1, string p2, float t1[], float t2[]){
	for(int i = 0; i < n; i++){
		if (t1[i] > t2[i]){
			cout << p2 << " ";
		} else if (t1[i] < t2[i]){
			cout << p1 << " ";
		} else {
			cout << "Empate ";
		}
	}
	cout << endl;
	float aux1 = 0, aux2 = 0;
	for(int i = 0; i < n; i++){
		if (t1[i] - aux1 > t2[i] - aux2){
			cout << p2 << " ";
		} else if(t1[i] - aux1 < t2[i] - aux2){
			cout << p1 << " ";
		} else {
			cout << "Empate ";
		}
		aux1 = t1[i];
		aux2 = t2[i];
	}
}

int main() {
	int nMedicoes;
	string piloto1, piloto2;
	cin >> nMedicoes;
	float tempo1[nMedicoes], tempo2[nMedicoes];
	cin >> piloto1;
	for(int i = 0; i < nMedicoes; i++){
		cin >> tempo1[i];
	}
	cin >> piloto2;
	for(int i = 0; i < nMedicoes; i++){
		cin >> tempo2[i];
	}
	imprime (nMedicoes, piloto1, piloto2, tempo1, tempo2);

	return 0;
}
