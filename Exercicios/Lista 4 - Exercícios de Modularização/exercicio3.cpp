#include <iostream>

using namespace std;

bool XoR(int n1,int n2){
	if (n1 == 1 and n2==1){
		return false;
	}
	else if (bool(n1) or bool(n2)){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	int n1,n2;
	cin>>n1>>n2;
	
	if (XoR(n1,n2)==0){
		cout<<"False";
	}
	else{
		cout<<"True";
	}
	
	return 0;
}
