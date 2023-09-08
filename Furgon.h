#pragma once
#include "Vehiculo.h"
class Furgon:Vehiculo{
public:
	int ejes;
private:
	Furgon(float, float, float, int);
	~Furgon();
};

