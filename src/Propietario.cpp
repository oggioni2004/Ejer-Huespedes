//
// Created by richa on 20/03/2023.
//
using namespace std;
#include "string"
#include "Propietario.h"
Propietario::Propietario(string nombre, int identificacion, string sexo, string fechaNacimiento, int puntaje):
nombre(nombre), identificacion(identificacion), sexo(sexo), fechaNacimiento(fechaNacimiento), puntaje(puntaje){}

void Propietario::agregarPropietarioVector(Propietario m) {
    vecPropietario.push_back(m);
}

void Propietario::agregarHogar(string nombre, string direccion, int numeroCamas, string alojaBebes,string alojarHuespedes, string disponibilidad, string describirHogar) {
    Hogar* pHogar = new Hogar(nombre,direccion,numeroCamas,alojaBebes,alojarHuespedes,disponibilidad,describirHogar);
}

void Propietario::mostrarPropietario(vector<Propietario> vec) {
    for (int i =0; i < vec.size(); i++) {
        cout << vec[i] << endl;
    }
}

string Propietario::getNombre() {
    return nombre;
}

void Propietario::setNombre(string nombre) {
    this->nombre=nombre;
}

int Propietario::getIdentificacion() {
    return identificacion;
}

void Propietario::setIdentificacion(int identificacion) {
    this->identificacion=identificacion;
}

string Propietario::getSexo() {
    return sexo;
}

void Propietario::setSexo(string sexo) {
    this->sexo=sexo;
}

string Propietario::getFechaNacimiento() {
    return fechaNacimiento;
}

void Propietario::setFechaNacimiento(string fechaNacimiento) {
    this->fechaNacimiento=fechaNacimiento;
}

int Propietario::getPuntaje() {
    return puntaje;
}

void Propietario::setPuntaje(int puntaje) {
    this->puntaje=puntaje;
}