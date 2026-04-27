#include <iostream>
#include <string>
#include "produto.hpp"

Produto::Produto(std::string nome, double preco, int estoque) : name(nome), price(preco), stock(estoque) {}

std::string Produto::nome()
{
    return this->name;
}

double Produto::preco()
{
    return this->price;
}

int Produto::estoque()
{
    return this->stock;
}

bool Produto::aplicarDesconto(double percentual) // 0 <= percentual <= 100
{                                                // retorna false se pré-condição não for atendida
    if (0 > percentual || percentual > 100)
        return false;

    this->price = this->price - (this->price * (percentual / 100));
    return true;
}

bool Produto::vender(int quantidade) // quantidade <= estoque
{                                    // retorna false se pré-condição não for atendida
    if (quantidade > stock)
        return false;

    this->stock -= quantidade;
    return true;
}