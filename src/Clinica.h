//
// Created by richa on 20/03/2023.
//

#ifndef HUESPEDES_CLINICA_H
#define HUESPEDES_CLINICA_H

#include <string>
#include <iostream>
#include "unordered_map"
#include "vector"
using namespace std;

class Clinica {
private:
    string nombre;
    string descripcionClinica;
    string ciudad;
    string municipio;
    string corregimiento;
    vector<Clinica> vecClinica;

public:
    Clinica() = default;
    Clinica(string nombre, string descripcionClinica, string ciudad, string municipio, string corregimiento);

    void agregarClinicaVector(Clinica m);

    string getNombre();
    void setNombre(string nombre);

    string getDescripcionClinica();
    void setDescripcionClinica(string descripcionClinica);

    string getCiudad();
    void setCiudad(string ciudad);

    string getMunicipio();
    void setMunicipio(string municipio);

    string getCorregimiento();
    void setCorregimiento(string corregimiento);
};


#endif //HUESPEDES_CLINICA_H
