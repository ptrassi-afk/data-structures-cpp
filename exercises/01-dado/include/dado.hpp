#ifndef DADO_HPP
#define DADO_HPP

class Dado
{
private:
    int side;
    int current_value = 0;

public:
    Dado();
    Dado(int faces);
    void rolar();
    int valor(); // último valor sorteado; 0 se nunca rolado
    int faces();
};

#endif