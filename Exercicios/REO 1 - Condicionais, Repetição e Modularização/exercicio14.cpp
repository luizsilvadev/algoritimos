#include <iostream>
using namespace std;
void ricci(int n1, int n2, int n3) {
	int aux;
	if (n3 > 0) {
		cout << n1 << " ";
		aux = n1 + n2;
		n1 = n2;
		n2 = aux;
		ricci(n1, n2, n3-1);
	}
}
int main() {
	int num1, num2, num3;
	cin >> num1 >> num2 >> num3;
	ricci(num1, num2, num3);
	return 0;
}
