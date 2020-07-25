#include <iostream>
#include <cmath>
using namespace std;

int main(){
	string sOuc,gOur;
	float angulo;
	cin>>sOuc>>gOur>>angulo;
	if (gOur == "g")
		angulo *= 3.1415/180;
	
	if (sOuc=="s")
		cout<<sin(angulo);
	else if (sOuc=="c")
		cout<<cos(angulo);
	
	return 0;
}
