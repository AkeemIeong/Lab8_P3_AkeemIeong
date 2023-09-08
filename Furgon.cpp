#include "Furgon.h"
Furgon::Furgon(float capacidad, float velocidad, float consumo, int ejes) :Vehiculo(capacidad, velocidad, consumo) {
	this->ejes = ejes;
}