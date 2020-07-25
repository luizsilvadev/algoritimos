#include <iostream>
using namespace std;
int main() {
	int i = 0, qnp = 0, qnn = 0, j = 0;
	float num[200], pnp = 0, pnn = 0, ma = 0;
	do {
		cin >> num[i];
		i++;
	} while (num[i-1] != 0);
	while ( j < i) {
		ma = ma + num[j];
		if (num[j] > 0) {
			qnp++;
		} else if (num[j] < 0) {
			qnn++;
		}
		j++;
	}
	i = i - 1;
	ma = ma / i;
	pnp = (qnp / 100.0) * i;
	pnn = (qnn / 100.0) * i;
	cout << ma << endl << qnp << endl << qnn << endl << pnp << endl << pnn << endl;
	return 0;
}
// Correção manual. Usou vetores. Declarou a entrada como float, era int. Nota alterada de 100 para 85.
