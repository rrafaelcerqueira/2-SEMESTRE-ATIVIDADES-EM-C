#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float volu, raio;

    std::cout << "Digite o raio da esfera: ";
    std::cin >> raio;

    volu = (4.0/3.0) * M_PI * pow(raio, 3);

    std::cout << "Este e o volume dessa esfera: " << volu;

    return 0;
}
