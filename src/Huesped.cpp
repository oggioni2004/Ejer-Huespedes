//
// Created by richa on 20/03/2023.
//

#include "Huesped.h"
Huesped::Huesped(string nombre, int identificacion, string sexo, string fechaNacimiento, int puntaje):
nombre(nombre), identificacion(identificacion), sexo(sexo), fechaNacimiento(fechaNacimiento), puntaje(puntaje){}

void Huesped::agregarHuespedVector(Huesped m) {
    vecHuesped.push_back(m);
}

void Huesped::agregarClinica(string nombre, string descripcionClinica, string ciudad, string municipio,string corregimiento) {
   Clinica* pClinica = new Clinica(nombre,descripcionClinica,ciudad,municipio,corregimiento);
}

string Huesped::getNombre() {
    return nombre;
}

void Huesped::setNombre(string nombre) {
    this->nombre=nombre;
}

int Huesped::getIdentificacion() {
    return identificacion;
}

void Huesped::setIdentificacion(int identificacion) {
    this->identificacion=identificacion;
}

string Huesped::getSexo() {
    return sexo;
}

void Huesped::setSexo(string sexo) {
    this->sexo=sexo;
}

string Huesped::getFechaNacimiento() {
    return fechaNacimiento;
}

void Huesped::setFechaNacimiento(string fechaNacimiento) {
    this->fechaNacimiento=fechaNacimiento;
}

int Huesped::getPuntaje() {
    return puntaje;
}

void Huesped::setPuntaje(int puntaje) {
    this->puntaje=puntaje;
}