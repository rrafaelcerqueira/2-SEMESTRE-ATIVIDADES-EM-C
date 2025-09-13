#include <iostream>

using namespace std;

int main()
{
    int a, b, soma, divisao, subtracao, multi;

    std::cout << "Digite o primeiro numero: ";
    std::cin >> a;

    std::cout << "Digite o segundo numero: ";
    std::cin >> b;

    soma = a + b;
    divisao = a / b;
    subtracao = a - b;
    multi = a * b;

    std::cout << "  " << endl;

    std::cout << "Adicao:        " << a << " + " << b << " : " << soma << endl;

    std::cout << "Divisao:       " << a << " / " << b << " : " << divisao << endl;

    std::cout << "Subtracao:     " << a << " - " << b << " : " << subtracao << endl;

    std::cout << "Multiplicacao: " << a << " x " << b << " : " << multi << endl;


    return 0;
}
