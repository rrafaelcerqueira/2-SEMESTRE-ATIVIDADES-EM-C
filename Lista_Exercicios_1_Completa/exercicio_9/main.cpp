#include <iostream>

using namespace std;

int main()
{
    int a, b, c, soma, quadrado;

    std::cout << "Digite o primeiro valor: ";
    std::cin >> a;

    std::cout << "Digite o segundo valor: ";
    std::cin >> b;

    std::cout << "Digite o terceiro valor: ";
    std::cin >> c;

    soma = a + b + c;
    quadrado = soma * soma;

    std::cout << "Este e o valor dos 3 numeros somados e ao quadrado: " << quadrado;

    return 0;
}
