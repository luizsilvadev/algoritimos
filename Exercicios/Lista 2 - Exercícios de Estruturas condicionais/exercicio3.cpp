#include <iostream>
using namespace std;

int main(){
	int tipo;
	float valorInicial;
	cin>>tipo>>valorInicial;
	if (tipo==1)
		cout<<valorInicial*1.005;
	else if (tipo==2)
		cout<<(valorInicial*1.03)-30;
	return 0;
}
