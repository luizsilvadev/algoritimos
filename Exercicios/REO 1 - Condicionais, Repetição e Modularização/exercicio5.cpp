#include <iostream>
using namespace std;
int main(){
	float thanos, thor;
	cin >> thanos >> thor;
	int i = 0;
	do {
		thanos = thanos - (thanos * 0.02);
		thor = thor - (thor * 0.06);
		i++;
	} while (thanos < thor);
	cout << i;
	return 0;
}
// Correção manual. Nenhum erro encontrado. Usou float e nao double como pede enunciado. Alterei para 95.
