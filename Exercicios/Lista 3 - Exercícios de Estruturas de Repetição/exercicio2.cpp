#include <iostream>
using namespace std;

int main(){
	int n;
	int nTriang = 0;
	int cont = 1;
	cin>>n;

	while (cont<=n){
		nTriang = cont + nTriang;
		cont++;
	}
	
	cout<<nTriang;
	
	return 0;
}
