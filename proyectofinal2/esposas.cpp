#include "esposas.h"
#include "arabes.h"  // Needed for the definition of Arabe

void inicializarEsposa(Esposa& esposa, const string& nombre, const string& fechaNacimiento, double peso) {
	esposa.nombre = nombre;
	esposa.fechaNacimiento = fechaNacimiento;
	esposa.peso = peso;
	esposa.esposo = nullptr;
}

void mostrarEsposa(const Esposa& esposa) {
	cout << "Nombre: " << esposa.nombre << endl;
	cout << "Fecha de nacimiento: " << esposa.fechaNacimiento << endl;
	cout << "Peso: " << esposa.peso << endl;
	if (esposa.esposo) {
		cout << "Esposo: " << esposa.esposo->nombre << endl;
	} else {
		cout << "Esposo: No está casada" << endl;
	}
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
	sscanf(esposa.fechaNacimiento.c_str(), "%d/%d/%d", &annoEsposa, &mesEsposa, &diaEsposa);
	
	int edad = annoActual - annoEsposa;
	if (mesActual < mesEsposa || (mesActual == mesEsposa && diaActual < diaEsposa)) {
		edad--;
	}
	return edad;
}
