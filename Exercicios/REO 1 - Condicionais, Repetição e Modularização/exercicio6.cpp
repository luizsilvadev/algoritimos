#include <iostream>
using namespace std;
int main() {
	int qDesc;
	int porta = 1;
	cin >> qDesc;
	while (porta <= qDesc) {
		if ((porta * porta) <= qDesc) {
			cout << porta * porta << " ";
		}
		porta++;
	}
	return 0;
}
