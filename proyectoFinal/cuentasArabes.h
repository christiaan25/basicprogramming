#include <iostream>
#include <string>
#include <time.h>
using namespace std;

#ifndef ARABES_H
#define ARABES_H

// Estructura para representar un árabe con cuenta bancaria
struct Arabe {
	string nombre;
	int numeroCuenta; // Número único de cuenta bancaria
};

// Función para inicializar un árabe con nombre y número de cuenta
void inicializarArabe(Arabe& arabe, const string& nombre, int numeroCuenta) {
	arabe.nombre = nombre;
	arabe.numeroCuenta = numeroCuenta;
}

// Función para mostrar la información de un árabe
void mostrarArabe(Arabe arabe) {
	cout << "Nombre: " << arabe.nombre << " - Número de cuenta: " << arabe.numeroCuenta << endl;
}

#endif
