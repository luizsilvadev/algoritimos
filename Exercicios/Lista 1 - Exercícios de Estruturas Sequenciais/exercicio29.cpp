#include <iostream>
using namespace std;
int main() {
	int velocidade;
	cin >> velocidade;
	int mod = velocidade % 50;
	if (mod == 0){
		cout << velocidade / 50;
	} else {
		cout << (velocidade / 50)+1;
	}
	return 0;
}
