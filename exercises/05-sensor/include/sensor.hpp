#ifndef SENSOR_HPP
#define SNESOR_HPP

class Sensor
{
private:
    int capacity;
    double value;

public:
    Sensor(int capacidade);
    ~Sensor();

    bool registrar(double valor); // retorna false se capacidade esgotada
    double media();
    double maximo();
    int quantidade();
    int capacidade();
};

#endif