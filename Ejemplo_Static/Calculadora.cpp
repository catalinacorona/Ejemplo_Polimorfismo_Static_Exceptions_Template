#include "Calculadora.h"


Calculadora::Calculadora(std::string nombre_, std::string modelo_) : nombre(nombre_), modelo(modelo_) {
}

Calculadora::~Calculadora() {
}

std::string Calculadora::to_string() {
    std::stringstream salida;
    salida << "Marca -> " << this->nombre << std::endl
        << "Modelo -> " << this->modelo;
    return std::string();
}

void Calculadora::imprimir() {
    std::cout << this->to_string() << std::endl;
}

float Calculadora::sumar(std::stack<float> valores) {
    float aux = 0;
    while (!(valores.empty())) {
        float valor = valores.top();
        valores.pop();
        aux += valor;
    }
    return aux;
}


float Calculadora::restar(float valor1, float valor2) {
    return ( valor1 - valor2 );
}


float Calculadora::multiplicar(float valor1, float valor2) {
    return ( valor1 * valor2 );
}


float Calculadora::dividir(float valor1, float valor2) {

    if (valor2 == 0)
        throw "NO SE PUEDE DIVIDIR POR 0";
    else return ( valor1 / valor2 );
}
