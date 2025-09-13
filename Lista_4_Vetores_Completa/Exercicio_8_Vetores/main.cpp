#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> valores(6);

    cout << "Digite 6 valores inteiros:" << endl;
    for (int i = 0; i < valores.size(); i++) {
        cout << "Valor " << i + 1 << ": ";
        cin >> valores[i];
    }

    cout << "Valores na ordem inversa:" << endl;
    for (int i = valores.size() - 1; i >= 0; i--) {
        cout << valores[i] << " ";
    }
    cout << endl;

    return 0;
}
