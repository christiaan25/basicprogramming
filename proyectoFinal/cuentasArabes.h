#include <iostream>
#include <string>
#include <time.h>
using namespace std;

#ifndef ARABES_H
#define ARABES_H

// Estructura para representar un �rabe con cuenta bancaria
struct Arabe {
	string nombre;
	int numeroCuenta; // N�mero �nico de cuenta bancaria
};

// Funci�n para inicializar un �rabe con nombre y n�mero de cuenta
void inicializarArabe(Arabe& arabe, const string& nombre, int numeroCuenta) {
	arabe.nombre = nombre;
	arabe.numeroCuenta = numeroCuenta;
}

// Funci�n para mostrar la informaci�n de un �rabe
void mostrarArabe(Arabe arabe) {
	cout << "Nombre: " << arabe.nombre << " - N�mero de cuenta: " << arabe.numeroCuenta << endl;
}

#endif
