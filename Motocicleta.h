#pragma once
#include "Vehiculo.h"
class Motocicleta: public Vehiculo{
private:
	float cilindraje;
public:
	Motocicleta(float, float, float, float);
	~Motocicleta();
};

