#ifndef ESPOSA_H
#define ESPOSA_H

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

// Forward declaration
struct Arabe;

struct Esposa {
	string nombre;
	string fechaNacimiento;
	double peso;
	Arabe* esposo;  // Forward declaration used here
};

void inicializarEsposa(Esposa& esposa, const string& nombre, const string& fechaNacimiento, double peso);
void mostrarEsposa(const Esposa& esposa);
void modificarPeso(Esposa& esposa, double nuevoPeso);
int calcularEdad(const Esposa& esposa);

#endif
