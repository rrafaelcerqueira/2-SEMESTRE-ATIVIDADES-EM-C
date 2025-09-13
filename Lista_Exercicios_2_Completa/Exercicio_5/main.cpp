#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, x1, x2, delta;

    std::cout << "Digite o primeiro numero: ";
    std::cin >> a;

    std::cout << "Digite o segundo numero: ";
    std::cin >> b;

    std::cout << "Digite o terceiro numero: ";
    std::cin >> c;

    delta = b * b - 4 * a * c;
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

    std::cout << "O valor do X numero 1 e: " << x1 << endl;
    std::cout << "O valor do x numero 2 e: " << x2 << endl;

    return 0;
}
