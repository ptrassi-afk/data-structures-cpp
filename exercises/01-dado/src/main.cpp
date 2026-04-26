#include <iostream>
#include <cstdlib>
#include <ctime>
#include "dado.hpp"

int main(void)
{
    srand(time(nullptr));

    Dado d6(6);   // Usa o construtor com argumento
    Dado d20(20); // Usa o construtor com argumento

    std::cout << "Rolando d6 cinco vezes:\n";
    for (int i = 0; i < 5; i++)
    {
        d6.rolar();
        std::cout << "  " << d6.valor() << "\n";
    }

    std::cout << "Rolando d20:\n";
    d20.rolar();
    std::cout << "  " << d20.valor() << "\n";

    std::cout << "Valor antes de rolar (d6 recém-criado): ";
    Dado novo;                         // Usa o construtor padrão
    std::cout << novo.valor() << "\n"; // deve imprimir 0

    return 0;
}