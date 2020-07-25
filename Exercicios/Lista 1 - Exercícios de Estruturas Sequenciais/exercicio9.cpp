#include <iostream>
using namespace std;

int main()
{
    float salario,gratificacao,salarioLiquido;
    cin >> salario;
    gratificacao = salario * 0.05;
    salarioLiquido = (salario * 0.93)+gratificacao;
    cout<<salarioLiquido;
    return 0;
}

