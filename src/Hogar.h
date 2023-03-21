//
// Created by richa on 20/03/2023.
//

#ifndef HUESPEDES_HOGAR_H
#define HUESPEDES_HOGAR_H

#include <string>
#include <iostream>
#include "unordered_map"
#include "vector"
using namespace std;

class Hogar {
private:
    string nombre;
    string direccion;
    int numeroCamas;
    string alojarBebes;
    string alojarHuespedes;
    string disponibilidad;
    string describirHogar;
    vector<Hogar> vecHuesped;
public:
    Hogar() = default;
    Hogar(string nombre, string direccion, int numeroCamas, string alojaBebes, string alojarHuespedes, string disponibilidad, string describirHogar);

    void agregarHogarVector(Hogar m);

    string getNombre();
    void setNombre(string nombre);

    string getDireccion();
    void setDireccion(string direccion);

    int getNumeroCamas();
    void setNumeroCamas(int numeroCamas);

    string getAlojarBebes();
    void setAlojarBebes(string alojarBebes);

    string getAlojarHuespedes();
    void setAlojarHuespedes(string alojarHuespedes);

    string getDisponibilidad();
    void setDisponibilidad(string disponibilidad);

    string getDescribirHogar();
    void setDescribirHogar(string describirHogar);
};


#endif //HUESPEDES_HOGAR_H
