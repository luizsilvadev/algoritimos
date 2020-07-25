#include <iostream>
#include <string>
using namespace std;
int soma(string n){
	int cont = n.length()-1;
	int soma = 0;
	while (cont>=0) {
		soma += n[cont] - '0';
		cont--;
	}
	return soma;
}
string harshad(string n) {
	if (stoi(n) % soma(n) == 0){
		return "True";
	} else {
		return "False";
	}
}
int main() {
	string num;
	cin >> num;
	cout<<harshad(num);
	return 0;
}
