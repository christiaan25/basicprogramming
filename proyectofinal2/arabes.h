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
	
	Arabe(const string& nombre); // Constructor
	void casar(Esposa* esposa);  // Function to marry an Esposa
};

void inicializarArabe(Arabe& arabe, const string& nombre, int numeroCuenta);
void mostrarArabe(const Arabe& arabe);

#endif

