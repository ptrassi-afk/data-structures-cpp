#ifndef PRODUTO_HPP
#define PRODUTO_HPP

#include <iostream>
#include <string>

class Produto
{
private:
    std::string name;
    double price = 0.0;
    double percentage; // maybe don't need it
    int stock = 0;
    int amount; // maybe don't need it

public:
    Produto(std::string nome, double preco, int estoque);
    // pré-condições: preco >= 0, estoque >= 0
    std::string nome();
    double preco();
    int estoque();

    bool aplicarDesconto(double percentual); // 0 <= percentual <= 100
                                             // retorna false se pré-condição não for atendida
    bool vender(int quantidade);             // quantidade <= estoque
                                             // retorna false se pré-condição não for atendida
};

#endif