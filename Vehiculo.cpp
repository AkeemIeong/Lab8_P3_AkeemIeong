#include "Vehiculo.h"
Vehiculo::Vehiculo() {
}

Vehiculo::Vehiculo(float capacidad, float velocidad, float consumo) {
	this->capacidad = capacidad;
	this->velocidad = velocidad;
	this->consumo = consumo;
}

float Vehiculo::getCapacidad() {
	return capacidad;
}

void Vehiculo::setCapacidad(float cap) {
	this->capacidad = cap;
}

float Vehiculo::getVelocidad() {
	return velocidad;
}

void Vehiculo::setVelocidad(float cap) {
	this->velocidad = cap;
}

float Vehiculo::getConsumo() {
	return consumo;
}

void Vehiculo::setConsumo(float cap) {
	this->consumo = cap;
}