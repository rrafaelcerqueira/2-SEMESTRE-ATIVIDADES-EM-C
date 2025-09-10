#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<double> numeros(10);
    int qtdNegativos = 0;
    double somaPositivos = 0;

    cout << "Digite 10 numeros reais:" << endl;
    for (int i = 0; i < numeros.size(); i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];

        if (numeros[i] < 0) {
            qtdNegativos++;
        } else {
            somaPositivos += numeros[i];
        }
    }

    cout << "\nQuantidade de numeros negativos: " << qtdNegativos << endl;
    cout << "Soma dos numeros positivos: " << somaPositivos << endl;

    return 0;
}
