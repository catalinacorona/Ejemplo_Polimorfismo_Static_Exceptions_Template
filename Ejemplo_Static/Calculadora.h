#pragma once
#include <stack>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

class Calculadora
{
	const string nombre;
	const string modelo;
public:
	Calculadora(string nombre_, std::string modelo_);
	~Calculadora();
	string to_string();
	void imprimir();
	static float sumar(std::stack<float> valores);
	static float restar(float valor1, float valor2);
	static float multiplicar(float valor1, float valor2);
	static float dividir(float valor1, float valor2);
};

