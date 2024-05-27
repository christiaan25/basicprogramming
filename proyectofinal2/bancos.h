#ifndef BANCOS_H
#define BANCOS_H

#include <iostream>
#include <string>
#include <vector>
#include "arabes.h"

using namespace std;

// Estructura para representar un banco
struct Banco {
	string nombre;
	vector<pair<Arabe, double>> cuentas; // Vector de pares (Arabe, cantidad de dinero en BTC)
};

// Función para inicializar un banco con nombre y cuentas predefinidas
void inicializarBanco(Banco& banco, const string& nombre, const vector<pair<string, double>>& cuentas);
void mostrarBanco(const Banco& banco);

#endif
