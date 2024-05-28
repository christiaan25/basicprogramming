#include "arabes.h"

Arabe::Arabe(const string& nombre, double presupuesto) : nombre(nombre), numeroCuenta(0), presupuestoMensual(presupuesto) {}

void Arabe::casar(Esposa* esposa) {
	esposa->esposo = this; // Establecer al Arabe como esposo de la Esposa
	esposas.push_back(esposa); // Agregar la Esposa al vector de esposas del Arabe
}

double Arabe::calcularDistribucion() const {
	if (esposas.empty()) return 0.0;
	return presupuestoMensual / esposas.size(); // Distribuir el presupuesto entre el número de esposas
}

void inicializarArabe(Arabe& arabe, const string& nombre, int numeroCuenta, double presupuesto) {
	arabe.nombre = nombre;
	arabe.numeroCuenta = numeroCuenta;
	arabe.presupuestoMensual = presupuesto;
}

void mostrarArabe(const Arabe& arabe) {
	cout << "Nombre: " << arabe.nombre << " - Número de cuenta: " << arabe.numeroCuenta << endl;
	cout << "Presupuesto mensual: " << arabe.presupuestoMensual << " BTC" << endl;
	cout << "Distribución por esposa: " << arabe.calcularDistribucion() << " BTC" << endl;
	for (const auto& esposa : arabe.esposas) {
		cout << "  Esposa: " << esposa->nombre << endl;
	}
}
