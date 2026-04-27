#ifndef PONTO2D_HPP
#define PONTO2D_HPP

class Ponto2D
{
private:
    double coord_x = 0.0;
    double coord_y = 0.0;

public:
    Ponto2D(double x, double y);
    double x() const;
    double y() const;
    double distanciaOrigem();
    double distancia(const Ponto2D &outro);
};

#endif