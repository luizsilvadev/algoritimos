#include <iostream>
using namespace std;
int main() {
	int num, i = 0, j = 0, aux = 1;
	cin >> num;  
	while (j < num) {
		while (i != aux) {    
			cout << "@";
			i++;           
			if (i < aux) {
				cout << "#";
				i++;
			}
			if (i == aux) {
				cout << endl;
			}
		}
		aux++;
		i = 0;
		j++;
	}
}
