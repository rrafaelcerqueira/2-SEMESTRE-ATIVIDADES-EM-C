#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int maior, menor;

   vector <int> A(10);

   cout << "Preencha o vetor com 10 numeros:" << endl;
    for(int i = 0; i < A.size(); i++){
        cout << "Posicao " << i + 1 << ": ";
        cin >> A[i];
   }


   maior = A[0];
   menor = A[0];

    for (int i = 1; i < A.size(); i++) {
        if (A[i] > maior) {
            maior = A[i];
        }
        if (A[i] < menor) {
            menor = A[i];
        }
    }

    cout << "Maior elemento: " << maior << endl;
    cout << "Menor elemento: " << menor << endl;

    return 0;
}
