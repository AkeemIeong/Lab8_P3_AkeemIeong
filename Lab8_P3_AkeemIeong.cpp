#include <iostream>
#include <vector>
#include <string>
#include "Vehiculo.h"
#include "AdminArchivos.h"
#include "Camion.h"
#include "Furgon.h"
#include "Motocicleta.h"
#include "Viaje.h"
#include <fstream>
using namespace std;

//void DatosParaAdmin() {
//    int cont = 0;
//    char temp[100],aux;
//    FILE *f;
//    f = fopen("viajes.txt","r");
//    if (f == NULL) {
//        cout << "no se pudo abrir el archivo" << endl;
//        exit(1);
//    }
//    while (!feof(f)) {
//        fgets(temp,100,f);
//        cont++;
//    }
//    
//    rewind(f);
//
//    for (int i = 0; !feof(f); i++) {
//        for (size_t i = 0; i < 100; i++){
//            temp[i] = '\0';
//        }
//        aux = '0';
//        for (size_t j = 0; j < aux!= ','; j++) {
//            aux = fgetc(f);
//            if (aux != ',') {
//                temp[j] = aux;
//            }
//        }
//
//    }
//}

vector<Vehiculo*> caso1() {
    int op2, ejes;
    string tipo;
    vector <Vehiculo*> vehiculos;
    cout << "1. Agregar Motocicleta" << endl
        << "2. Agregar Camion" << endl
        << "3. Agregar Furgon" << endl;
    cin >> op2;
    switch (op2) {
    case 1:
        float cilindraje;
        cout << "Ingrese le cilindraje de la moto: ";
        cin >> cilindraje;
        vehiculos.push_back(new Motocicleta(0.5, 60, 3, cilindraje));
        break;
    case 2:
        cout << "Ingrese el tipo del Camion: ";
        getline(cin, tipo);
        vehiculos.push_back(new Camion(30, 90, 15, tipo));
        break;
    case 3:
        cout << "Ingrese los ejes del furgon: ";
        cin >> ejes;
        vehiculos.push_back(new Furgon(5, 110, 8, ejes));
        break;
    }
    return vehiculos;
}

string caso3() {
    string info,otra;
    ifstream archivo;
    archivo.open("viajes.txt", ios::in);
    if (archivo.fail()) {
        cout << "No se puedo abrir el archivo";
        exit(1);
    }

    while (!archivo.eof()) {
        getline(archivo, info);
        //cout << info << endl;
        otra += info;
    } 

    archivo.close();
    return otra;
}

int main(){
    int op;
    vector <Vehiculo*> vehiculos;
    AdminArchivos admin;

    do {
        cout << "----MENU----" << endl
            << "1. Agregar Vehiculo" << endl
            << "2. Listar Vehiculos" << endl
            << "3. Leer archivo de viajes" << endl
            << "4. Asignar viajes" << endl
            << "5. Guardar informacion de viajes" << endl
            << "6. Salir" << endl;
        cin >> op;
        switch (op) {
            case 1:
                vehiculos = caso1();
                break;
            case 2:
                for (auto &v: vehiculos) {
                    cout << v << endl;
                }
                break;
            case 3: 
                admin.leerViajes(caso3());
                break;
            case 4:
                break;
            case 5:
                ofstream archivo;
                archivo.open("resultados.txt", ios::app);
                if (archivo.fail()) {
                    cout << "No se puedo abrir el archivo";
                    exit(1);
                }
                archivo << admin << endl;
                archivo.close();
                break;
        }
    } while (op!=6);
    for (auto v : vehiculos) {
        delete v;
    }
}