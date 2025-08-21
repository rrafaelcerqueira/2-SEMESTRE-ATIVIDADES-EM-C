#include <iostream>

using namespace std;

int pesok, diasg, conta;

int main()
{

    std::cout << "Digite quantos sacos de racao voce comprou: ";
    std::cin >> pesok;

    pesok = pesok * 1000;
    diasg = 5 * (100 * 2);
    conta = pesok - diasg;

    std::cout << "Em cinco dias sobrara: " << conta; "g";

    return 0;
}
