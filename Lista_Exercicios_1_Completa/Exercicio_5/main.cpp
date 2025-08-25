#include <iostream>

using namespace std;

void mudarValor (int &a,int &b){
    int c = a;
    a = b;
    b = c;
}

int main()
{
    int a, b;

    std::cout << "Digite o valor da variavel a: ";
    std::cin >> a;

    std::cout << "Digite o valor da variavel b: ";
    std::cin >> b;

    std::cout << "A variavel A e: " << a << endl;
    std::cout << "A variavel B e: " << b << endl;

    mudarValor(a,b);

    std::cout << "A variavel A trocada e: " << a << endl;
    std::cout << "A variavel B trocada e: " << b;

    return 0;
}
