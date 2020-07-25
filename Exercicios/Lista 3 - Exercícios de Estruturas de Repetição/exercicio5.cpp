#include <iostream>
using namespace std;

int main(){
	int n1,n2,cont=1,n=0;
	cin>>n1>>n2;
	while (cont<=n2){
		n += n1;
		cont++;
		cout<<n<<endl;
	}
	
	return 0;
}
