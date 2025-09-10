#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int conta;

 vector <int> A(10);

    cout << "Preencha o vetor com 10 numeros:" << endl;
    for(int i = 0; i < A.size(); i++){
        cout << "Posicao " << i + 1 << ": ";
        cin >> A[i];
   }

    cout << "Verificando pares: " << endl;
    for (int i = 0; i < A.size(); i++) {
        if (A[i] % 2 == 0) {
            cout << "Numero " << A[i] << " na posicao " << i + 1 << " eh PAR" << endl;
        } else {
            cout << "Numero " << A[i] << " na posicao " << i + 1 << " eh IMPAR" << endl;
        }
    }

    return 0;
}
