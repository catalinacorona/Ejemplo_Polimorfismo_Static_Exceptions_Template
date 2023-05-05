#include "Cuadrado.h"
template<typename T>
Cuadrado<T>::Cuadrado(T longLado_) : Figura(4) {
    this->longLado = longLado_;
}

template<typename T>
Cuadrado<T>::~Cuadrado() {
}

template<typename T>
float Cuadrado<T>::area() {
    return (float)(floor(pow(this->longLado, 2) * 100.0) / 100.0);
}

template<typename T>
float Cuadrado<T>::perimetro() {
    return (float)(floor(this->cantLados * this->longLado * 100.0) / 100.0);
}

template<typename T>
std::string Cuadrado<T>::to_string() {
    std::stringstream salida;
    salida << "Cuadrado de lado con longitud: " << this->longLado << std::endl << "Perimetro: " << this->perimetro() << std::endl << "Area: " << this->area() << std::endl;
    return salida.str();
}

template<typename T>
void Cuadrado<T>::imprimir() {
    std::cout << this->to_string() << std::endl;
}