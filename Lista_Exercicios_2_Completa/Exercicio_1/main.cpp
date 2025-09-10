#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double p, i, m, tt;
    int np;

    cout << "Digite a capital inicial: ";
    cin >> p;

    cout << "Digite a taxa de juros: ";
    cin >> i;

    cout << "Digite o numero de parcelas: ";
    cin >> np;

    i = i / 100.0;
    tt = p * pow((1 + i), np);
    m = tt / np;

    cout << "O valor de cada parcela sera de R$ " << m  << " e o valor total do emprestimo sera R$ " << tt << endl;

    return 0;
}
