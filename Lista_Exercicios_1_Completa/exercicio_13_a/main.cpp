#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c, soma, dif;

    a = 2;
    b = 3;
    c = 4;

    dif = -5;

    soma = a + b + c - dif;

    dif = pow(soma, 2);

    soma = sqrt(dif);

    a = c;
    b = -3;

    std::cout << "a = " << a << endl;
    std::cout << "b = " << b << endl;
    std::cout << "c = " << c << endl;
    std::cout << "soma = " << soma << endl;
    std::cout << "dif = " << dif << endl;

    return 0;
}
