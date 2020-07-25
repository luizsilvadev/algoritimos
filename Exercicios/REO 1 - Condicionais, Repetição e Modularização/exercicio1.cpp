#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	float val;
	cin >> val;
	if (val < 50) {
		val = val * 1.05;
	} else if (val <= 100) {
		val = val * 1.10;
	} else {
		val = val * 1.15;
	}
	cout << fixed << setprecision(2);
	if(val <= 80) {
		cout << val << endl << "Barato";
	} else if (val <= 120) {
		cout << val << endl << "Normal";
	} else if (val <= 200) {
		cout << val << endl << "Caro";
	} else {
		cout << val << endl << "Muito caro";
	}
	return 0;
}
