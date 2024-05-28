#include "bancos.h"

void inicializarBanco(Banco& banco, const string& nombre, const vector<pair<string, double>>& cuentas) {
	banco.nombre = nombre;
	int numeroCuenta = 1245202144; // Número inicial de cuenta
	for (const auto& cuenta : cuentas) {
		Arabe cliente(cuenta.first, 1.0); // Asignar un presupuesto mensual de 1 BTC
		inicializarArabe(cliente, cuenta.first, numeroCuenta++, 1.0);
		banco.cuentas.push_back(make_pair(cliente, cuenta.second));
	}
}

void mostrarBanco(const Banco& banco) {
	cout << "Nombre del banco: " << banco.nombre << endl;
	cout << "Cuentas de clientes árabes:" << endl;
	for (const auto& cuenta : banco.cuentas) {
		mostrarArabe(cuenta.first);
		cout << " - Cantidad de BTC: " << cuenta.second << endl;
	}
}
