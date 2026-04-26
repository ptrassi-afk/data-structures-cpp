#include <iostream>
#include <iomanip>
#include "temperatura.hpp"

int main()
{
    Temperatura agua_fervendo(100.0, 'C');
    Temperatura corpo_humano(98.6, 'F');
    Temperatura zero_absoluto(0.0, 'K');

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "Água fervendo (100 °C):\n";
    std::cout << "  Kelvin:     " << agua_fervendo.kelvin() << " K\n";
    std::cout << "  Celsius:    " << agua_fervendo.celsius() << " °C\n";
    std::cout << "  Fahrenheit: " << agua_fervendo.fahrenheit() << " °F\n";

    std::cout << "\nCorpo humano (98.6 °F):\n";
    std::cout << "  Celsius:    " << corpo_humano.celsius() << " °C\n";
    std::cout << "  Kelvin:     " << corpo_humano.kelvin() << " K\n";

    std::cout << "\nZero absoluto (0 K):\n";
    std::cout << "  Celsius:    " << zero_absoluto.celsius() << " °C\n";
    std::cout << "  Fahrenheit: " << zero_absoluto.fahrenheit() << " °F\n";

    std::cout << "\nÁgua fervendo > corpo humano? "
              << (agua_fervendo.maiorQue(corpo_humano) ? "sim" : "não") << "\n";
    std::cout << "Corpo humano > zero absoluto? "
              << (corpo_humano.maiorQue(zero_absoluto) ? "sim" : "não") << "\n";

    return 0;
}