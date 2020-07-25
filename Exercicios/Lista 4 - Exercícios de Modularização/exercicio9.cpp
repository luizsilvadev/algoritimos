#include <iostream>

using namespace std;

int maior_5(int n1,int n2,int n3, int n4, int n5){
	int maior=n1;
	if (n2>maior)
		maior=n2;
	if (n3>maior)
		maior=n3;
	if (n4>maior)
		maior=n4;
	if (n5>maior)
		maior=n5;
	return maior;
}

int main(){
	int n1,n2,n3,n4,n5;
	cin>>n1>>n2>>n3>>n4>>n5;
	cout<<n1<<" "<<n2<<" "<<n3<<" "<<n4<<" "<<n5<<endl<<maior_5(n1,n2,n3,n4,n5);
	return 0;
}
