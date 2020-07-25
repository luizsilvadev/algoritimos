#include <iostream>
using namespace std;
void fibonacci(int n1, int n2, int n3) {
	int aux;
	if (n3 > 0) {
		cout << n1 << " ";
		aux = n1 + n2;
		n1 = n2;
		n2 = aux;
		fibonacci(n1, n2, n3-1);
	}
}
int main() {
	int num;
	cin >> num;
	fibonacci(0, 1, num);
	return 0;
}
//Correção manual. A função não atende o enunciado.
