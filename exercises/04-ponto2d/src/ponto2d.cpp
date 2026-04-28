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
    double distance = std::pow(this->coord_x, 2) + std::pow(this->coord_y, 2);
    return std::sqrt(distance);
}

double Ponto2D::distancia(const Ponto2D &outro) {}