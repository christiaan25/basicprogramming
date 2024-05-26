
#ifndef ESPOSA_H
#define ESPOSA_H

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

struct Esposa {
	string nombre;
	string fechaNacimiento;
	double peso;
};

void inicializarEsposa(Esposa& esposa, const string& nombre, const string& fechaNacimiento, double peso) {
	esposa.nombre = nombre;
	esposa.fechaNacimiento = fechaNacimiento;
	esposa.peso = peso;
}

void mostrarEsposa(const Esposa& esposa) {
	cout << "Nombre: " << esposa.nombre << endl;
	cout << "Fecha de nacimiento: " << esposa.fechaNacimiento << endl;
	cout << "Peso: " << esposa.peso << endl;
}

void modificarPeso(Esposa& esposa, double nuevoPeso) {
	esposa.peso = nuevoPeso;
}

int calcularEdad(const Esposa& esposa) {
	time_t now = time(0);
	tm* localTime = localtime(&now);
	int annoActual = localTime->tm_year + 1900;
	int mesActual = localTime->tm_mon + 1;
	int diaActual = localTime->tm_mday;
	
	int annoEsposa, mesEsposa, diaEsposa;
	sscanf(esposa.fechaNacimiento.c_str(), "%d-%d-%d", &annoEsposa, &mesEsposa, &diaEsposa);
	
	int edad = annoActual - annoEsposa;
	if (mesActual < mesEsposa || (mesActual == mesEsposa && diaActual < diaEsposa)) {
		edad--;
	}
	return edad;
}

#endif
