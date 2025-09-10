#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<double> numeros;
    vector<double> numeros_calculados;
    double valor_lido;

    for(int i = 0; i < 10; i++) {
    std::cout << "Digite um Numero: ";
    std::cin >> valor_lido;
    numeros.push_back(valor_lido);
}


    for(int i = 0; i < numeros.size(); i++){
        numeros_calculados.push_back(numeros[i] * numeros[i]);
    }

    std::cout << "\nOs quadrados dos numeros digitados sao:" << std::endl;
    for(double valor_final : numeros_calculados)
    {
        std::cout << valor_final << std::endl;
    }


    return 0;
}
