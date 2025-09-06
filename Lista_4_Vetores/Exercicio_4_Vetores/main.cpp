#include <iostream>
#include <vector>

using namespace std;

int main()
{
   vector<double> A(8);
   int x, y;
   double soma;

   cout << "Preencha o vetor com 8 numeros:" << endl;
   for(int i = 0; i < A.size(); i++){
        cout << "Posicao " << i + 1 << ": ";
        cin >> A[i];
   }

   cout << "Digite a primeira posicao (X): ";
   cin >> x;
   cout << "Digite a segunda posicao (Y): ";
   cin >> y;

   soma = A[x] + A[y];
   cout << soma;


    return 0;
}
