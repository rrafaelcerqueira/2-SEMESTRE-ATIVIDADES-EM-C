#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Digite um numero: ";
    cin >> numero;

    if (numero <= 1) {
        cout << numero << " não é primo." << endl;
    } else {
        for (int i = 2; i * i <= numero; i++) {
            if (numero % i == 0) {
                cout << numero << " nao e primo." << endl;
                return 0;
            }
        }
        cout << numero << " e primo." << endl;
    }

    return 0;
}
