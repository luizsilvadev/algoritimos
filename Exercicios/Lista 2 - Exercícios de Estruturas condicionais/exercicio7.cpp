#include <iostream>
using namespace std;

int main(){
	float n1,n2,n3,n4;
	cin>>n1>>n2>>n3>>n4;
	
	float maior1=n1,maior2=-9999999;
	
	if (n1>n2 and n1>n3 and n1>n4)
		maior1=n1;
	else if (n2>n1 and n2>n3 and n2>n4)
		maior1=n2;
	else if (n3>n1 and n3>n2 and n3>n4)
		maior1=n3;
	else if (n4>n1 and n4>n2 and n4>n3)
		maior1=n4;
		
	if (n1!=maior1 and n1>maior2)
		maior2=n1;
	if (n2!=maior1 and n2>maior2)
		maior2=n2;
	if (n3!=maior1 and n3>maior2)
		maior2=n3;
	if (n4!=maior1 and n4>=maior2)
		maior2=n4;
		
	cout<<maior1<<endl<<maior2;
	
	return 0;
}
