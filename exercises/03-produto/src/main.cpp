#include <iostream>
#include <iomanip>
#include "produto.hpp"

int main()
{
    std::cout << std::fixed << std::setprecision(2);

    Produto teclado("Teclado mecânico", 350.00, 10);
    Produto mouse("Mouse gamer", 120.00, 3);

    std::cout << teclado.nome() << " — R$" << teclado.preco()
              << " | estoque: " << teclado.estoque() << "\n";

    teclado.vender(3);
    std::cout << "Após vender 3: estoque = " << teclado.estoque() << "\n";

    teclado.aplicarDesconto(10.0);
    std::cout << "Após desconto de 10%: R$" << teclado.preco() << "\n";

    bool ok;

    ok = teclado.vender(20);
    std::cout << "Vender 20 (estoque insuficiente): "
              << (ok ? "sucesso" : "falhou") << "\n";

    ok = teclado.aplicarDesconto(-5.0);
    std::cout << "Desconto de -5% (inválido): "
              << (ok ? "sucesso" : "falhou") << "\n";

    ok = teclado.aplicarDesconto(110.0);
    std::cout << "Desconto de 110% (inválido): "
              << (ok ? "sucesso" : "falhou") << "\n";

    std::cout << "\n"
              << mouse.nome() << " — R$" << mouse.preco()
              << " | estoque: " << mouse.estoque() << "\n";
    mouse.vender(3);
    std::cout << "Após vender 3: estoque = " << mouse.estoque() << "\n";
    ok = mouse.vender(1);
    std::cout << "Vender 1 (estoque zerado): "
              << (ok ? "sucesso" : "falhou") << "\n";

    return 0;
}