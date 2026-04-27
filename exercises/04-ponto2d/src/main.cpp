#include <iostream>
#include <iomanip>
#include "ponto2d.hpp"

int main()
{
    int n;
    std::cout << "Número de pontos: ";
    std::cin >> n;

    Ponto2D **pontos = new Ponto2D *[n];

    for (int i = 0; i < n; i++)
    {
        double x, y;
        std::cout << "Ponto " << (i + 1) << " (x y): ";
        std::cin >> x >> y;
        pontos[i] = new Ponto2D(x, y);
    }

    // centroide
    double somaX = 0.0, somaY = 0.0;
    for (int i = 0; i < n; i++)
    {
        somaX += pontos[i]->x();
        somaY += pontos[i]->y();
    }
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nCentroide: (" << somaX / n << ", " << somaY / n << ")\n";

    // ponto mais distante da origem
    int maisLonge = 0;
    for (int i = 1; i < n; i++)
    {
        if (pontos[i]->distanciaOrigem() > pontos[maisLonge]->distanciaOrigem())
            maisLonge = i;
    }
    std::cout << "Ponto mais distante da origem: ("
              << pontos[maisLonge]->x() << ", "
              << pontos[maisLonge]->y() << ")"
              << " — distância " << pontos[maisLonge]->distanciaOrigem() << "\n";

    for (int i = 0; i < n; i++)
        delete pontos[i];
    delete[] pontos;

    return 0;
}