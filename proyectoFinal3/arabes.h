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
	void casar(Esposa* esposa); // Función para casar a una esposa
	double calcularDistribucion() const; // Nueva función para calcular distribución por esposa
};

void inicializarArabe(Arabe& arabe, const string& nombre, int numeroCuenta, double presupuesto);
void mostrarArabe(const Arabe& arabe);

#endif
