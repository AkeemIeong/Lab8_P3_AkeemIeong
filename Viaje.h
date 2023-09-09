#pragma once
#include <string>
#include "Vehiculo.h"
using namespace std;
class Viaje{
private:
	string ciudad;
	float distancia;
	float carga;
	Vehiculo vehiculo;
	float tiempoEstimado;
	float costoEstimado;
public:
	~Viaje();
	Viaje(string, float, float);
	Viaje(string, float, float, Vehiculo, float, float);
	void asignarVeiculo();
	void calcularTiempoCosto();
};

