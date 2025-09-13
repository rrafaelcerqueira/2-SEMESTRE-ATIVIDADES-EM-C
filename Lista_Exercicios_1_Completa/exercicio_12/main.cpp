#include <iostream>

using namespace std;

int main()
{
    int num1, ante, suce;

    std::cout << "Digite um numero: ";
    std::cin >> num1;

    ante = num1 - 1;
    suce = num1 + 1;

    std::cout << "Este e o antecessor: " << ante << endl;
    std::cout << "Este e o sucessor: " << suce << endl;





    return 0;
}
