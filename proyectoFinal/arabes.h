#ifndef ARABES_H
#define ARABES_H

#include <string>
#include <vector>
#include "esposa.h" // Incluimos la definición de la clase Esposa

class Arabe {
public:
	std::string nombre;
	std::vector<Esposa*> esposas; // Vector de punteros a esposas
	
	// Constructor
	Arabe(const std::string& nombre) : nombre(nombre) {}
	
	// Función para casar un Arabe con una Esposa
	void casar(Esposa* esposa) {
		esposa->esposo = this; // Establecer al Arabe como esposo de la Esposa
		esposas.push_back(esposa); // Agregar la Esposa al vector de esposas del Arabe
	}
};

#endif
