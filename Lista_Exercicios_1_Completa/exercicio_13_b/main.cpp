#include <iostream>

using namespace std;

int main()
{
    int x, y, quociente, resto;

    x = 25;
    y = 52;

    resto = y % x;
    quociente = y / x;

    x = resto;
    y = quociente;

    resto = x % y;
    quociente = x / y;

    std::cout << "resto = " << resto << endl;
    std::cout << "quociente = " << quociente << endl;

    return 0;
}
