#include "Motocicleta.h"
Motocicleta::Motocicleta(float capacidad, float velocidad, float consumo, float cilindraje) :Vehiculo(capacidad, velocidad, consumo) {
	this->cilindraje = cilindraje;
}