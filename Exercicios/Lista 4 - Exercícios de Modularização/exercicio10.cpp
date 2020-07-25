#include <iostream>
#include <cmath>

using namespace std;

float juros(float c,float i,int t){
	float m=c*pow((1+(i/100)),t);
	return m;
}

int main(){
	float c,i;
	int t;
	cin>>c>>i>>t;
	
	cout<<juros(c,i,t);

	return 0;
}
