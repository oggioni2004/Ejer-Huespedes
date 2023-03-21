//
// Created by richa on 20/03/2023.
//

#include "Hogar.h"
Hogar::Hogar(string nombre, string direccion, int numeroCamas, string alojaBebes, string alojarHuespedes,string disponibilidad, string describirHogar):
nombre(nombre), direccion(direccion), numeroCamas(numeroCamas), alojarBebes(alojaBebes), alojarHuespedes(alojarHuespedes), disponibilidad(disponibilidad), describirHogar(describirHogar){}

string Hogar::getNombre() {
    return nombre;
}

void Hogar::setNombre(string nombre) {
    this->nombre=nombre;
}

string Hogar::getDireccion() {
    return direccion;
}

void Hogar::setDireccion(string direccion) {
    this->direccion=direccion;
}

string Hogar::getAlojarBebes() {
    return alojarBebes;
}

void Hogar::setAlojarBebes(string alojarBebes) {
    this->alojarBebes=alojarBebes;
}

string Hogar::getAlojarHuespedes() {
    return alojarHuespedes;
}

void Hogar::setAlojarHuespedes(string alojarHuespedes) {
    this->alojarHuespedes=alojarHuespedes;
}

string Hogar::getDisponibilidad() {
    return disponibilidad;
}

void Hogar::setDisponibilidad(string disponibilidad) {
    this->disponibilidad=disponibilidad;
}

string Hogar::getDescribirHogar() {
    return describirHogar;
}

void Hogar::setDescribirHogar(string describirHogar) {
    this->describirHogar=describirHogar;
}

int Hogar::getNumeroCamas() {
    return numeroCamas;
}

void Hogar::setNumeroCamas(int numeroCamas) {
    this->numeroCamas=numeroCamas;
}

