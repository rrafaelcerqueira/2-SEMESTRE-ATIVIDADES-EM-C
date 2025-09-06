#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int soma;

    //---------------------------------------------------------------//

    vector<int> A = {1, 0, 5, -2, -5, 7};

    soma = A[0] + A[1] + A[5];
    cout << "A soma dos vetores na posicao 1, 2 e 5 sao: " << soma << endl;

    //---------------------------------------------------------------//

    cout << endl;
    A[4] = 100;
    cout << "O numero na posicao 4 nos vetores e: " << A[4] << endl;
    cout << endl;

    //---------------------------------------------------------------//

    cout << "Estes sao os valores em cada vetor, do 1 ao 6: " << endl;
    cout << endl;
    for (int vetores : A) {
    cout << vetores << endl;
}
    //---------------------------------------------------------------//

    return 0;
}
