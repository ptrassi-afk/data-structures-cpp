#include <iostream>
#include "dados.hpp"

class Dado
{
    Dado();
    Dado(int faces);
    void rolar();
    int valor(); // último valor sorteado; 0 se nunca rolado
    int faces();
};