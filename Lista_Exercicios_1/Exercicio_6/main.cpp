#include <iostream>

using namespace std;

int main()
{

   int vol, comp, larg, alt;

   std::cout << "Digite o comprimento da caixa: ";
   std::cin >> comp;

   std::cout << "Digite a largura da caixa: ";
   std::cin >> larg;

   std::cout << "Digite a altura da caixa: ";
   std::cin >> alt;

   vol = comp * larg * alt;

   std::cout << "O volume dessa caixa e: " << vol;



    return 0;
}
