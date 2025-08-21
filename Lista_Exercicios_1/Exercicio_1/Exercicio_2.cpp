#include <iostream>

using namespace std;

        float salario, salariore;

int main()
{
    std::cout << "Informe seu salario: ";
    std::cin >> salario;

    salariore = salario + (salario * 0.25);

    std::cout << "Esse será seu novo salario: " << salariore;



}
