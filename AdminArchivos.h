#pragma once
#include <vector>
#include <string>
#include "Viaje.h"
using namespace std;
class AdminArchivos{
private:
	string archivoViajes;
	string archivoResultados;
	vector <Viaje*> viajes;
public:
	void leerViajes();
	void guardarResultdos();
	AdminArchivos(string, string, vector<Viaje*>);
	~AdminArchivos();
};

