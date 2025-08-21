#include <iostream>

using namespace std;

int anosp, anoa, dias, meses, semanas, idade;

int main()
{

    std::cout << "Informe quando voce nasceu: ";
    std::cin >> anosp;

    std::cout << "Informe o ano que estamos: ";
    std::cin >> anoa;

    idade = anoa  - anosp;
    meses = idade * 12;
    semanas = idade * 52;
    dias = idade * 365;

    std::cout << "Voce teve " << idade << " anos, " << meses << " meses," << semanas << " semanas e " << dias << " dias de vida";


    return 0;
}
