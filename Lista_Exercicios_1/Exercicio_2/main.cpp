#include <iostream>

using namespace std;

    float salario, salariore, porcen, porcen2;

int main()
{
    std::cout << "Informe seu salario: ";
    std::cin >> salario;

    std::cout << "Informe o reajuste: ";
    std::cin >> porcen;

    porcen2 = porcen / 100;
    salariore = salario + (salario * porcen2);

    std::cout << "Este e seu novo salario: " << salariore;

    return 0;
}
