#include <iostream>
#include <cmath>
#include "ponto2d.hpp"

Ponto2D::Ponto2D(double x, double y) : coord_x(x), coord_y(y) {}

double Ponto2D::x() const
{
    return this->coord_x;
}

double Ponto2D::y() const
{
    return this->coord_y;
}

double Ponto2D::distanciaOrigem()
{
    double b = pow((0.0 - this->x()), 2);
    double a = pow((0.0 - this->y()), 2);
    
    return sqrt(b + a);
}

double Ponto2D::distancia(const Ponto2D &outro)
{
    return outro - this->distanciaOrigem();
}