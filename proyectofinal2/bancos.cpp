#include "bancos.h"

void inicializarBanco(Banco& banco, const string& nombre, const vector<pair<string, double>>& cuentas) {
	banco.nombre = nombre;
	int numeroCuenta = 1000; // Número inicial de cuenta
	for (const auto& cuenta : cuentas) {
		Arabe cliente(cuenta.first); // Use the constructor to initialize
		inicializarArabe(cliente, cuenta.first, numeroCuenta++);
		banco.cuentas.push_back(make_pair(cliente, cuenta.second));
	}
}

void mostrarBanco(const Banco& banco) {
	cout << "Nombre del banco: " << banco.nombre << endl;
	cout << "Cuentas de clientes árabes:" << endl;
	for (const auto& cuenta : banco.cuentas) {
		cout << "Nombre: " << cuenta.first.nombre << " - Número de cuenta: " << cuenta.first.numeroCuenta;
		cout << " - Cantidad de BTC: " << cuenta.second << endl;
	}
}
