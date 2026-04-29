#ifndef TABULEIRO_HPP
#define TABULEIRO_HPP

class Tabuleiro
{
private:
    char **grid;
    int _lines;
    int _columns;

public:
    Tabuleiro(int linhas, int colunas);
    ~Tabuleiro();

    bool marcar(int linha, int coluna, char simbolo);
    char simbolo(int linha, int coluna) const;
    void imprimir();
    int linhas();
    int colunas();
};

#endif