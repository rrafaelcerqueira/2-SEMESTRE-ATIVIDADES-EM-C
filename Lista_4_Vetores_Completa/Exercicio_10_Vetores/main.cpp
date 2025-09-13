#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> valores(5);
    int maior, menor;
    double soma = 0;

    cout << "Digite 5 valores:" << endl;
    for (int i = 0; i < valores.size(); i++) {
        cout << "Valor " << i + 1 << ": ";
        cin >> valores[i];
        soma += valores[i];
    }

    maior = menor = valores[0];
    for (int i = 1; i < valores.size(); i++) {
        if (valores[i] > maior) maior = valores[i];
        if (valores[i] < menor) menor = valores[i];
    }

    cout << "\nValores digitados: ";
    for (int v : valores) {
        cout << v << " ";
    }

    cout << "\nMaior valor: " << maior << endl;
    cout << "Menor valor: " << menor << endl;
    cout << "Media dos valores: " << soma / valores.size() << endl;

    return 0;
}
