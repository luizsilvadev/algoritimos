#include <iostream>

using namespace std;

int main(){
	char letra;
	cin>>letra;
	if (letra >= 'a' and letra<= 'z')
		cout<<"MINUSCULA";
	else if (letra >= 'A' and letra<= 'Z')
		cout<<"MAIUSCULA";
	
	return 0;
}
