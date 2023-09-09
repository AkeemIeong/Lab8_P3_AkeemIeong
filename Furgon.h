#pragma once
#include "Vehiculo.h"
class Furgon:public Vehiculo{
private:
	int ejes;
public:
	Furgon(float, float, float, int);
	~Furgon();
};

