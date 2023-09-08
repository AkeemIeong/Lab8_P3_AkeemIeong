#pragma once
#include <string>
#include "Vehiculo.h"
using namespace std;
class Camion: public Vehiculo{
private:
	string tipo;
public:
	~Camion();
	Camion(float, float, float, string);
};

