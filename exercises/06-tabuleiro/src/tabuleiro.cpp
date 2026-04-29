#include <iostream>
#include "tabuleiro.hpp"

Tabuleiro::Tabuleiro(int linhas, int colunas) : _lines(linhas), _columns(colunas)
{
    grid = new char *[_lines];

    for (int i = 0; i < _lines; i++)
    {
        grid[i] = new char[_columns];
        for (int j = 0; j < _columns; j++)
        {
            grid[i][j] = '.';
        }
    }
}

Tabuleiro::~Tabuleiro()
{

    for (int i = 0; i < _lines; i++)
    {
        delete[] grid[i];
    }

    delete[] grid;
}

bool Tabuleiro::marcar(int linha, int coluna, char simbolo)
{
    if (linha >= 0 && linha < _lines && coluna >= 0 && coluna < _columns)
    {
        grid[linha][coluna] = simbolo;
        return true;
    }
    return false;
}

char Tabuleiro::simbolo(int linha, int coluna) const
{
    if (linha >= 0 && linha < _lines && coluna >= 0 && coluna < _columns)
    {
        return grid[linha][coluna];
    }
    return '\0';
}

void Tabuleiro::imprimir()
{
    for (int i = 0; i < _lines; i++)
    {
        for (int j = 0; j < _columns; j++)
        {
            std::cout << grid[i][j] << ' ';
        }
        std::cout << '\n';
    }
}

int Tabuleiro::linhas()
{
    return _lines;
}

int Tabuleiro::colunas()
{
    return _columns;
}