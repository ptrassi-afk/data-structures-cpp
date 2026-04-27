#ifndef TEMPERATURA_HPP
#define TEMPERATURA_HPP

#include <iostream>

class Temperatura
{
private:
    double value;
    double conversion = 0.0;
    char scale;

public:
    Temperatura(double valor, char escala); // escala: 'C', 'F' ou 'K'
                                            // invariante: kelvin >= 0
    double celsius();
    double fahrenheit();
    double kelvin();
    bool maiorQue(const Temperatura &outra);
};

#endif