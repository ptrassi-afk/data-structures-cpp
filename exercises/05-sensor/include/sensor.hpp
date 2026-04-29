#ifndef SENSOR_HPP
#define SENSOR_HPP

class Sensor
{
private:
    double *readings;
    int _capacity;
    int _amount;

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