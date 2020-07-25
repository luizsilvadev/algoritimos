#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> V;
	for (unsigned int i = 0; i < 10; i++)
		V.push_back(i);
	for (unsigned int i = 0; i <= V.size(); i++)
		cout << V[i] << " "; // não checa limites
	cout << endl;
	V.insert(V.end(),10);
	V.insert(V.begin(),-1);
	for (unsigned int i = 0; i <= V.size(); i++)
		cout << V.at(i) << " "; // checa limites
	cout << endl;
	return 0;
}
