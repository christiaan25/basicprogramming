#ifndef PAREJAS_H
#define PAREJAS_H

#include <vector>
#include "arabes.h"
#include "esposas.h"

class ParejasManager {
public:
	void establecerMatrimonio(Arabe& arabe, Esposa& esposa);
	void mostrarRelaciones(const std::vector<Arabe>& arabes);
};

#endif
