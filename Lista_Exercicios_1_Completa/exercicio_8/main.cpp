#include <iostream>

using namespace std;

int main()
{
    float dolar, cotacao, convertido;

    cout << "Digite quanto dinheiro em dolar voce possui: ";
    cin >> dolar;

    cout << "Digite a cotacao atual do dolar (em reais): ";
    cin >> cotacao;

    convertido = dolar * cotacao;

    cout << "Este e o valor convertido em real: R$ " << convertido << endl;

    return 0;
}
