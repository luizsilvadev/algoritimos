#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int CodProduto, Estado;
	float Imposto, Peso, PrecoCargaTotal, PrecoCarga, PrecoProduto;
	cin >> CodProduto >> Estado >> Peso;
	if (CodProduto > 9 and CodProduto < 21) {
		PrecoProduto = 100;
	} else if (CodProduto > 20 and CodProduto < 31) {
		PrecoProduto = 250;
	} else if (CodProduto > 30 and CodProduto < 41) {
		PrecoProduto = 340;
	}
	Peso = Peso * 1000;
	PrecoCarga = Peso * PrecoProduto;
	switch (Estado){
		case 1:
		Imposto = PrecoCarga * 0.35;
		break;
		case 2:
		Imposto = PrecoCarga * 0.25;
		break;
		case 3:
		Imposto = PrecoCarga * 0.15;
		break;
		case 4:
		Imposto = PrecoCarga * 0.05;
		break;
		case 5:
		Imposto = 0;
		break;
	}
	PrecoCargaTotal = PrecoCarga + Imposto;
	cout << fixed << setprecision(0);
	cout << Peso << endl;
	cout << PrecoCarga << endl;
	cout << Imposto << endl;
	cout << PrecoCargaTotal << endl;
	return 0;
}
