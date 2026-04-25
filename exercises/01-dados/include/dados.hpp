#ifndef DADOS.HPP
#define DADOS .HPP

class Dado
{
public:
    Dado();
    Dado(int faces);
    void rolar();
    int valor(); // último valor sorteado; 0 se nunca rolado
    int faces();
};

#endif