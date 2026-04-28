#include <iostream>
#include "sensor.hpp"

Sensor::Sensor(int capacidade) : capacity(capacidade) {}
Sensor::~Sensor() {}

bool Sensor::registrar(double valor) // retorna false se capacidade esgotada
{
    if (this->count++ > this->capacity)
        return false;

    return true;
}

double Sensor::media() {}

double Sensor::maximo() {}

int Sensor::quantidade() {}

int Sensor::capacidade() {}