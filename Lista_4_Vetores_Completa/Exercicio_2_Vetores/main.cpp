#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numeros = {1, 2, 3, 4, 5, 6};

    cout << "Digite o valor do Vetor 1: ";
    cin >> numeros[0];

    cout << "Digite o valor do Vetor 2: ";
    cin >> numeros[1];

    cout << "Digite o valor do Vetor 3: ";
    cin >> numeros[2];

    cout << "Digite o valor do Vetor 4: ";
    cin >> numeros[3];

    cout << "Digite o valor do Vetor 5: ";
    cin >> numeros[4];

    cout << "Digite o valor do Vetor 6: ";
    cin >> numeros[5];

    cout << "Este sao os vetores que vc escreveu: " << endl;
        for(int vetores : numeros){
            cout << vetores << endl;
        }

    return 0;
}
