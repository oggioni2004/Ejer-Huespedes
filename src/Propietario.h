//
// Created by richa on 20/03/2023.
//

#ifndef HUESPEDES_PROPIETARIO_H
#define HUESPEDES_PROPIETARIO_H

#include <string>
#include <iostream>
#include "Hogar.h"
#include "Evaluacion.h"
#include "Reserva.h"
#include "vector"
#include "unordered_map"
using namespace std;

class Propietario {
private:
    string nombre;
    int identificacion;
    string sexo;
    string fechaNacimiento;
    int puntaje;
    Hogar* pHogar;
    vector<Propietario> vecPropietario;

public:
    Propietario() = default;
    Propietario(string nombre, int identificacion, string sexo, string fechaNacimiento, int puntaje);

    void agregarHogar(string nombre, string direccion, int numeroCamas, string alojaBebes, string alojarHuespedes, string disponibilidad, string describirHogar);

    void mostrarPropietario(vector<Propietario> vecPropietario);

    void agregarPropietarioVector(Propietario m);

    string getNombre();
    void setNombre(string nombre);

    int  getIdentificacion();
    void setIdentificacion(int identificacion);

    string getSexo();
    void setSexo(string sexo);

    string getFechaNacimiento();
    void setFechaNacimiento(string fechaNacimiento);

    int getPuntaje();
    void setPuntaje(int puntaje);


};


#endif //HUESPEDES_PROPIETARIO_H
