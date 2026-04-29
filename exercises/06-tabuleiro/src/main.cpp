#include <iostream>
#include "tabuleiro.hpp"

int main()
{
    Tabuleiro t(3, 3);

    std::cout << "Tabuleiro inicial:\n";
    t.imprimir();

    t.marcar(0, 0, 'X');
    t.marcar(1, 1, 'O');
    t.marcar(2, 2, 'X');
    t.marcar(0, 2, 'O');

    std::cout << "\nApós marcações:\n";
    t.imprimir();

    bool ok = t.marcar(5, 0, 'X');
    std::cout << "\nMarcar (5, 0): " << (ok ? "ok" : "fora dos limites") << "\n";

    ok = t.marcar(0, -1, 'X');
    std::cout << "Marcar (0, -1): " << (ok ? "ok" : "fora dos limites") << "\n";

    std::cout << "\nTamanho: " << t.linhas() << "x" << t.colunas() << "\n";

    return 0;
}