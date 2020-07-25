#include <iostream>

using namespace std;

int main(){
	int h1,m1,h2,m2,h3,m3;
	cin>>h1>>m1>>h2>>m2;
	

	if (h1==h2 and m1>m2){
		h2 += 23;
		m2 += 60;
	}
	if (m1>m2){
		m2+=60;
		h2--;
	}
	if (h1>h2){
		h2 += 24;
	}
	
	h3 = h2 - h1;
	m3 = m2 - m1;
	
	if (h1==h2 and m1==m2){
		h3 = 24;
		m3 = 0;
	}
	
	cout<<h3<<" "<<m3;
	
	return 0;
}
