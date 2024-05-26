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

// Funci�n para inicializar un banco con nombre y cuentas predefinidas
void inicializarBanco(Banco& banco, const string& nombre, const vector<pair<string, double>>& cuentas) {
	banco.nombre = nombre;
	int numeroCuenta = 1000; // N�mero inicial de cuenta
	for (const auto& cuenta : cuentas) {
		Arabe cliente;
		inicializarArabe(cliente, cuenta.first, numeroCuenta++);
		banco.cuentas.push_back(make_pair(cliente, cuenta.second));
	}
}

// Funci�n para mostrar la informaci�n de un banco
void mostrarBanco(Banco banco) {
	cout << "Nombre del banco: " << banco.nombre << endl;
	cout << "Cuentas de clientes �rabes:" << endl;
	for (const auto& cuenta : banco.cuentas) {
		cout << "Nombre: " << cuenta.first.nombre << " - N�mero de cuenta: " << cuenta.first.numeroCuenta;
		cout << " - Cantidad de BTC: " << cuenta.second << endl;
	}
}
