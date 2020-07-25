#include <iostream>

using namespace std;

string nomemeses(int nmes){
	if (nmes==1)
		return "janeiro";
	else if (nmes==2)
		return "fevereiro";
	else if (nmes==3)
		return "marco";
	else if (nmes==4)
		return "abril";
	else if (nmes==5)
		return "maio";
	else if (nmes==6)
		return "junho";
	else if (nmes==7)
		return "julho";
	else if (nmes==8)
		return "agosto";
	else if (nmes==9)
		return "setembro";
	else if (nmes==10)
		return "outubro";
	else if (nmes==11)
		return "novembro";
	else if (nmes==12)
		return "dezembro";
	else
		return "erro";
}

int main(){
	int mes;
	cin>>mes;
	cout<<nomemeses(mes);
	return 0;
}
