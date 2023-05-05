#pragma once
#define uint unsigned int
using namespace std;

#include <cmath>
#include <string>
#include <sstream>
#include <iostream>

template<typename T> class Figura {
protected:
	const unsigned int cantLados;
public:
	Figura(unsigned int cantLados_);
	~Figura();
	virtual float area() = 0;
	virtual float perimetro() = 0;
	virtual string to_string() = 0;
	virtual void imprimir() = 0;
};


