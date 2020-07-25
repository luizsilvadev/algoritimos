#include <iostream>
using namespace std;
void permitidoDesfilar(int mi, int ci, int mmi, int m, int c, int mm) {
	float auturaIdeal = ((mi*1000)+(ci*10)+(mmi)) * 1.01;
	float auturaCarro = (m*1000)+(c*10)+(mm);
	if (auturaIdeal >= auturaCarro) {
		cout << "sim" << endl;
	} else {
		cout << "nao" << endl;
	}
}
int main() {
	int mi, ci, mmi, m, c, mm;
	cin >> mi >> ci >> mmi;
	cin >> m >> c >> mm;
	permitidoDesfilar(mi, ci, mmi, m, c, mm);
	return 0;
}
//Correção manual. Atenção ao enunciado; ele pede uma função que retorna "sim" ou "nao".
