#pragma once
#include "Figura.h"
using namespace std;

template <typename T> class Cuadrado : public Figura<T> {

	T longLado;
public:
	Cuadrado(T longLado_);
	~Cuadrado();
	float area();
	float perimetro();
	string to_string();
	void imprimir();
};
