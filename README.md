# Data Structures I: Activities with ADTs in C++

This repository contains the implementation of several Data Summary Types (ADTs) developed for the Algorithms and Data Structures I course. The main objective is to demonstrate the use of encapsulation, the separation between interface (.hpp) and implementation (.cpp), as well as memory management in C++.

## Project content

The activity consists of 6 practical exercises that address different levels of modeling complexity:

1. Dado: Simulation of a game die, exploring the generation of random numbers and the internal state of the object.

2. Temperatura: Conversion and manipulation of thermometric scales (Celsius, Fahrenheit, and Kelvin) using access and modification methods.

3. Produto: Management of inventory items, dealing with attributes such as name, price, and quantity in stock.

4. Ponto2d e Alocação: Implementation of Cartesian coordinates focusing on dynamic memory allocation on the client (main) side.

5. Sensor: Modeling of a technical reading device capable of storing and processing variations in the collected data.

6. Tabuleiro: Two-dimensional structure to represent games or logical matrices, working with indexing and cell states.

## Technologies and concepts used

- Language: C++

- Encapsulation: Use of classes with private and public members.

- Modularization: Division of code into header files and source code.

- Pointers: Address manipulation and dynamic allocation (Heap).

## How to compile:

1. `mkdir build && cd build`
2. `cmake ..`
3. `make app_'name folder'` 
4. To carry out the activity: `./exercises/'activity folder'/app_'name folder'`