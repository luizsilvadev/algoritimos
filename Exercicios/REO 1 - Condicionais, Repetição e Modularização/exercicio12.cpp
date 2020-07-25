#include <iostream>
using namespace std;
void inverte(int n1) {
	int num2;
	if (n1 > 0){
		cin >> num2;
		inverte(n1 - 1);
		cout << num2 << " ";
	}
}
int main() {
	int num1;
	cin >> num1;
	inverte(num1);
	return 0;
}
