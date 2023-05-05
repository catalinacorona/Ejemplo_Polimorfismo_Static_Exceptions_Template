#pragma once
#include "Figura.h"
#define PI 3.14

template<typename T>  class Circulo : public Figura <T> {
    const T radio;
public:
    Circulo(T radio_);
    ~Circulo();
    float area();
    float perimetro();
    std::string to_string();
    void imprimir();
};



