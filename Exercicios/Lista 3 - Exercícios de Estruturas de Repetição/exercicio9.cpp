#include <iostream>
using namespace std;
int main(){
	int n,cont=0,n1,n2,natual;
	cin>>n;
	n1=0;
	n2=1;
	while (cont<n){
		cout<<n1<<endl;
		natual=n2+n1;
		n1=n2;
		n2=natual;
		cont++;
	}
	return 0;
}
