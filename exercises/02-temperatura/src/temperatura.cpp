#include <iostream>
#include "temperatura.hpp"

Temperatura::Temperatura(double valor, char escala) : value(valor), scale(escala) {} // escala: 'C', 'F' ou 'K'
                                                                                     // invariante: kelvin >= 0
double Temperatura::celsius()
{
    switch (scale)
    {
    case 'C':
        conversion = value;
        break;
    case 'F':
        conversion = (value - 32.0) * (5.0 / 9.0);
        break;
    case 'K':
        conversion = value - 273.15;
        break;
    }

    return conversion;
}

double Temperatura::fahrenheit()
{
    switch (scale)
    {
    case 'C':
        conversion = (value * (9.0 / 5.0)) + 32.0;
        break;
    case 'F':
        conversion = value;
        break;
    case 'K':
        conversion = (value - 273.15) * (9.0 / 5.0) + 32.0;
        break;
    }

    return conversion;
}

double Temperatura::kelvin()
{
    switch (scale)
    {
    case 'C':
        conversion = value + 273.15;
        break;
    case 'F':
        conversion = (value - 32.0) * (5.0 / 9.0) + 273.15;
        break;
    case 'K':
        conversion = value;
        break;
    }

    return conversion;
}

bool Temperatura::maiorQue(const Temperatura &outra)
{
    Temperatura copy = outra;
    return this->celsius() > copy.celsius();
}