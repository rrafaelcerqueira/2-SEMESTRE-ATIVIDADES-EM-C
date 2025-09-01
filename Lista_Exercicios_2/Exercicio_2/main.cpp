#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float altu, t, g, r;

    std::cout << "Digite a altura que o objeto vai ser jogado: ";
    std::cin >> altu;

    g = 9,8;
    t = (2 * altu / g);
    r = sqrt(t);

    std::cout << "Este sera o tempo de queda: " << r << "s " << endl;

    return 0;
}
