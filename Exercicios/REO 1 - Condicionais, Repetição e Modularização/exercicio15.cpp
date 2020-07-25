#include <iostream>
using namespace std;
int num1, num2;
void multiplica(int n1, int n2) {
	if (num1 > 0) {
		n1 = n1 - 1;
		if (n1 > 0) {
			n2 = n2 + num2;
			multiplica(n1, n2);
		} else {
			cout << n2 << endl;
		}
	} else if (num1 < 0) {
		n1 = n1 + 1;
		if (n1 < 0) {
			n2 = n2 + num2;
			multiplica(n1, n2);
		} else {
			cout << -n2 << endl;
		}
	} else {
		cout << num1 << endl;
	}
}
int main() {
	cin >> num1 >> num2;
	multiplica(num1, num2);
	return 0;
}
