#include "arabes.h"

Arabe::Arabe(const string& nombre) : nombre(nombre), numeroCuenta(0) {}

void Arabe::casar(Esposa* esposa) {
	esposa->esposo = this; // Establecer al Arabe como esposo de la Esposa
	esposas.push_back(esposa); // Agregar la Esposa al vector de esposas del Arabe
}

void inicializarArabe(Arabe& arabe, const string& nombre, int numeroCuenta) {
	arabe.nombre = nombre;
	arabe.numeroCuenta = numeroCuenta;
}

void mostrarArabe(const Arabe& arabe) {
	cout << "Nombre: " << arabe.nombre << " - Número de cuenta: " << arabe.numeroCuenta << endl;
	for (const auto& esposa : arabe.esposas) {
		cout << "  Esposa: " << esposa->nombre << endl;
	}
}
