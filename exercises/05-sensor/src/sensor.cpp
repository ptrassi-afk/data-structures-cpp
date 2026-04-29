#include <iostream>
#include "sensor.hpp"

Sensor::Sensor(int capacidade) : _capacity(capacidade)
{
    _amount = 0;
    readings = new double[_capacity];
}

Sensor::~Sensor()
{
    delete[] readings;
}

bool Sensor::registrar(double valor)
{
    if (_amount < _capacity)
    {
        readings[_amount] = valor;
        _amount++;
        return true;
    }
    return false;
}

double Sensor::media()
{
    if (_amount == 0)
        return 0.0;

    double soma = 0.0;
    for (int i = 0; i < _amount; i++)
    {
        soma += readings[i];
    }
    return soma / _amount;
}

double Sensor::maximo()
{
    if (_amount == 0)
        return 0.0;

    double max = readings[0];
    for (int i = 1; i < _amount; i++)
    {
        if (readings[i] > max)
        {
            max = readings[i];
        }
    }
    return max;
}

int Sensor::quantidade()
{
    return _amount;
}

int Sensor::capacidade()
{
    return _capacity;
}