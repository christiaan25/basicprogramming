#ifndef ARABES_H
#define ARABES_H

#include <string>
#include <vector>
#include "esposas.h"

using namespace std;

struct Arabe {
	string nombre;
	int numeroCuenta;
	vector<Esposa*> esposas;
	double presupuestoMensual; // Nuevo campo para presupuesto mensual
	
	Arabe(const string& nombre, double presupuesto); // Constructor modificado
	void casar(Esposa* esposa); // Funci�n para casar a una esposa
	double calcularDistribucion() const; // Nueva funci�n para calcular distribuci�n por esposa
};

void inicializarArabe(Arabe& arabe, const string& nombre, int numeroCuenta, double presupuesto);
void mostrarArabe(const Arabe& arabe);

#endif
