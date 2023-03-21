//
// Created by richa on 20/03/2023.
//

#ifndef HUESPEDES_HUESPED_H
#define HUESPEDES_HUESPED_H

#include <string>
#include <iostream>
#include "Clinica.h"
#include "Evaluacion.h"
#include "Reserva.h"
#include "unordered_map"
#include "vector"
using namespace std;

class Huesped {
private:
    string nombre;
    int identificacion;
    string sexo;
    string fechaNacimiento;
    int puntaje;
    Clinica* pClinica;
    vector<Huesped> vecHuesped;

public:
    Huesped() = default;
    Huesped(string nombre, int identificacion, string sexo, string fechaNacimiento, int puntaje);

    void agregarClinica(string nombre, string descripcionClinica, string ciudad, string municipio, string corregimiento);

    void agregarHuespedVector(Huesped m);

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


#endif //HUESPEDES_HUESPED_H
