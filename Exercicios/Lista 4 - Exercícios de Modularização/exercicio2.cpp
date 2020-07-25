#include <iostream>
#include <string>
using namespace std;
string reverter(string n) {
	int cont = n.length()-1;
	string retorno = "";
	while (cont>=0){
		retorno += n[cont];
		cont--;
	}
	return retorno;
}
int main() {
	string num;
	cin >> num;
	cout<<reverter(num);
	return 0;
}
