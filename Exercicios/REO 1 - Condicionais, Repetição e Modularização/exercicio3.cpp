#include <iostream>
using namespace std;
int main() {
	int resto, a, b, num1, num2;
	cin >> num1 >> num2;
	a = num1;
	b = num2;
	do {
		resto = a % b;
		a = b;
		b = resto;
	} while (resto != 0);
	cout << ( num1 * num2) / a;
	return 0;
}
