#include <iostream>
#include <iomanip>
#include "sensor.hpp"

int main()
{
    std::cout << std::fixed << std::setprecision(2);

    Sensor s(5);

    double leituras[] = {23.4, 24.1, 22.8, 25.0, 23.9};

    for (int i = 0; i < 5; i++)
    {
        bool ok = s.registrar(leituras[i]);
        std::cout << "Registrar " << leituras[i] << ": "
                  << (ok ? "ok" : "sensor cheio") << "\n";
    }

    std::cout << "\nLeituras: " << s.quantidade() << "/" << s.capacidade() << "\n";
    std::cout << "Média:    " << s.media() << "\n";
    std::cout << "Máximo:   " << s.maximo() << "\n";

    bool ok = s.registrar(99.9);
    
    std::cout << "\nRegistrar 99.9 (além da capacidade): "
              << (ok ? "ok" : "sensor cheio") << "\n";

    return 0;
}