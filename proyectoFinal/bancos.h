#include <iostream>
#include <string>
#include <vector>
#include "cuentasArabes.h"

using namespace std;

// Estructura para representar un banco
struct Banco {
	string nombre;
	vector<pair<Arabe, double>> cuentas; // Vector de pares (Arabe, cantidad de dinero en BTC)
};

// Función para inicializar un banco con nombre y cuentas predefinidas
void inicializarBanco(Banco& banco, const string& nombre, const vector<pair<string, double>>& cuentas) {
	banco.nombre = nombre;
	int numeroCuenta = 1000; // Número inicial de cuenta
	for (const auto& cuenta : cuentas) {
		Arabe cliente;
		inicializarArabe(cliente, cuenta.first, numeroCuenta++);
		banco.cuentas.push_back(make_pair(cliente, cuenta.second));
	}
}

// Función para mostrar la información de un banco
void mostrarBanco(Banco banco) {
	cout << "Nombre del banco: " << banco.nombre << endl;
	cout << "Cuentas de clientes árabes:" << endl;
	for (const auto& cuenta : banco.cuentas) {
		cout << "Nombre: " << cuenta.first.nombre << " - Número de cuenta: " << cuenta.first.numeroCuenta;
		cout << " - Cantidad de BTC: " << cuenta.second << endl;
	}
}
