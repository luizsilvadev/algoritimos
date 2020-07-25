#include <iostream>
using namespace std;
int num1, num2;
void soma(int n1, int n2){
	if (n2 < 0) {
		if (n1 > n2){
			num1--;
			n1--;
			soma(n1, n2);
		}
	} else {
		if (n1 < n2){
			num1++;
			n1++;
			soma(n1, n2);
		}
	}
}
int main() {
	cin >> num1 >> num2;
	soma(0, num2);
	cout << num1 << endl;
	return 0;
}
