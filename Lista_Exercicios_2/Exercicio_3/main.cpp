#include <iostream>

using namespace std;

int main()
{
    double pa, pb;
    int anos;
    double txa, txb;

    std::cout << " Digite a populacao inicial da cidade A: ";
    std::cin >> pa;

    std::cout << " Digite a taxa de crescimento da populacao da cidade A: ";
    std::cin >> txa;

    std::cout << " Digite a populacaoo inicial da cidade B: ";
    std::cin >> pb;

    std::cout << " Digite a taxa de crescimento da populacao da cidade B: ";
    std::cin >> txb;

    anos = 0;

    if (pa <= pb && txa > txb){
        while (pa < pb) {
            pa = pa + (pa * (txa / 100.0));
            pb = pb + (pb * (txb / 100.0));
            anos++;
        }
        std::cout << "A cidade A vai demorar " << anos << " anos para ter " << pa << " habitantes a mais que a cidade B, que possuira: " << pb << " habitantes, apos " << anos << " anos ";
    } else if (pb <= pa && txb > txa){
        while (pb < pa) {
            pb = pb + (pb * (txb / 100.0));
            pa = pa + (pa * (txa / 100.0));
            anos++;
        }
        std::cout << "A cidade B vai demorar " << anos << " anos para ter " << pb << " habitantes a mais que a cidade A, que possuira: " << pa << "habitantes, apos " << anos << " anos ";
    } else {
        std::cout << "A ultrapassagem nao e possivel com os dados fornecidos.";
    }

    return 0;
}
