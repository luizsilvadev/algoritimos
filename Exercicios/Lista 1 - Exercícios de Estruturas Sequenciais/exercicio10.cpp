#include <iostream>
using namespace std;

int main()
{
    float salarioMin,salarioBruto,imposto,salarioFinal,valorHora;
    cin >> salarioMin;
    int horasTrabalhadas;
    cin >> horasTrabalhadas;
    valorHora = salarioMin * 0.05;
    salarioBruto = valorHora * horasTrabalhadas;
    imposto = salarioBruto * 0.23;
    salarioFinal = salarioBruto - imposto;
    cout<<salarioFinal;
    return 0;
}
