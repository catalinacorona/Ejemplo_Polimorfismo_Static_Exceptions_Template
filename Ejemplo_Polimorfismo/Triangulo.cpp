#include "Triangulo.h"
#include <stdio.h>    
#include <cmath>
#include <vector>
#include <list>
#include <iterator>
using namespace std;

template<typename T>
Triangulo<T>::Triangulo(std::array<float, 3> angulos_, std::array<float, 3> longLados_) : Figura(3) {
    this->angulos = angulos_;
    this->longLados = longLados_;
}
template<typename T>
Triangulo<T>::~Triangulo() {
}

template<typename T>
float Triangulo<T>::area() {
    float h = 0; //altura
    float area_triangulo = 0;

    float base = longLados[0];
    float lado1 = longLados[1];
    float lado2 = longLados[2];
   
    h = sin(angulos[0])*lado1;
    area_triangulo = (base * h) / 2;

    return area_triangulo;
}

template<typename T>
float Triangulo<T>::perimetro() {

    float acum = 0;
 
    for (array<float, 3>::iterator it_ = this->longLados.begin(); it_ != this->longLados.end(); it_++) {  //bucle hasta el final de la lista 
      acum += *it_; //acumulo lo que guarda el puntero
    }

    return acum;
}

template<typename T>
string Triangulo<T>::to_string() {
    std::stringstream salida;
    salida << "Triangulo de lado con longitud: " << this->longLados[0] << " - " << this->longLados[1] << " " << this->longLados[2]
           << std::endl << "Con angulos: " << this->angulos[0] << " - " << this->angulos[1] << " " << this->angulos[2]
           << std::endl << "Perimetro: " << this->perimetro() << std::endl << "Area: " << this->area() << std::endl;
    return salida.str();
}

template<typename T>
void Triangulo<T>::imprimir() {
    std::cout << this->to_string() << std::endl;
}