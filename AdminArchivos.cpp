#include "AdminArchivos.h"
#include <string>
#include <fstream>
#include <vector>;
#include <sstream>
#include <iostream>
using namespace std;
AdminArchivos::AdminArchivos(string archivosViajes, string archivosResultados, vector <Viaje*> viajes) {
	this->archivoViajes = archivosViajes;
	this->archivoResultados = archivosResultados;
}
AdminArchivos:: AdminArchivos() {

}

void AdminArchivos::leerViajes(string cadena) {
    vector<string> tokens;

    istringstream iss(cadena);
    string s;
    while (iss >> s) {
        tokens.push_back(s);
    }

    for (int i = 0; i < tokens.size; i+3) {
        cout << s << endl;
        viajes.push_back(new Viaje(tokens[i], stof(tokens[i+1]), stof(tokens[i+2])));
    }
}

void AdminArchivos:: guardarResultados() {

}

AdminArchivos::~AdminArchivos() {

}
