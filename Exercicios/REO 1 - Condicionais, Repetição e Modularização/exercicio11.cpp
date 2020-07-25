#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
float jurosComposto(float capital, float juros, int tempo) {
	return capital * pow(1 + (juros/100), tempo);
}
int main() {
	float capital, juros;
	int tempo;
	cin >> capital >> juros >> tempo;
	cout << fixed << setprecision(2);
	cout << jurosComposto(capital, juros, tempo) << endl;
	return 0;
}
