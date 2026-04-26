#include <iostream>
#include <cstdlib>
#include <ctime>
#include "dado.hpp"

Dado::Dado() : side(0) {}
Dado::Dado(int faces) : side(faces) {}

void Dado::rolar()
{
    if (side != 0)
        current_value = rand() % side + 1;
}

int Dado::valor()
{
    return current_value;
}

int Dado::faces()
{
    return current_value;
}