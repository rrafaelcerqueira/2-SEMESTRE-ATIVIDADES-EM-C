#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int maior, posicao;

    vector <int> A(10);

    cout << "Preencha o vetor com 10 numeros:" << endl;
    for(int i = 0; i < A.size(); i++){
        cout << "Posicao " << i + 1 << ": ";
        cin >> A[i];
   }

   maior = A[0];
    posicao = 0;

   for (int i = 1; i < A.size(); i++) {
        if (A[i] > maior) {
            maior = A[i];
            posicao = i;
        }
    }


    cout << " maior numero digitado foi " << maior << " e esta na posicao " << posicao + 1 << " do vetor." << endl;


    return 0;
}
