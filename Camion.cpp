#include "Camion.h"
Camion::Camion(float capacidad, float velocidad, float consumo, string tipo) :Vehiculo(capacidad, velocidad, consumo) {
	this->tipo = tipo;
}