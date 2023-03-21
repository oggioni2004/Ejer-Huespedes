
#include <iostream>
#include "Propietario.h"
#include "Huesped.h"
#include "Reserva.h"
#include "Evaluacion.h"

void primeraOpcion(Propietario* propietario){
    string nombreTemp, direccionTemp, alojaBebesTemp, alojarHuespedesTemp, disponibilidadTemp, describirHogarTemp;
    int numeroCamasTemp;

    cout << "Ingresa el nombre de la casa" << endl;
    cin.ignore();
    getline(cin,nombreTemp,'\n');

    cout << "Ingresa la direccion" << endl;
    cin.ignore();
    getline(cin,direccionTemp,'\n');

    cout << "Ingresa el numero de camas" << endl;
    cin >> numeroCamasTemp;

    cout << "Escribe si o no, si se pueden alojar bebes" << endl;
    cin.ignore();
    getline(cin,alojaBebesTemp,'\n');

    cout << "Escribe si o no, si se pueden alojar huespedes" << endl;
    cin.ignore();
    getline(cin,alojarHuespedesTemp,'\n');

    cout << "Escribe si o no, si hay disponibilidad en la casa" << endl;
    cin.ignore();
    getline(cin,disponibilidadTemp,'\n');

    cout << "Descripcion breve de la casa" << endl;
    cin.ignore();
    getline(cin,describirHogarTemp,'\n');

    propietario->agregarHogar(nombreTemp,direccionTemp,numeroCamasTemp,alojaBebesTemp,alojarHuespedesTemp,disponibilidadTemp,describirHogarTemp);
}

int main() {
    Propietario* pPropietario = new Propietario("richard oggioni",1111478186,"masculino","12/03/2004",4);
    int opc=0;
    do {
        cout << "****(/) Bienvenidos a conectate (/)****\n";
        cout << "1. Agregar info casa propietario\n";
        cout << "2. Mostrar propietarios\n";
        cout << "3. Mostrar huespedes\n";
        cout << "4. Crear reserva\n";
        cout << "5. Eliminar reserva\n";
        cout << "6. Mostrar reservas\n";
        cout << "7. Evaluaciones\n";
        cout << "0. Salir\n" << endl;

        cin >> opc;

        switch (opc) {
            case 1:primeraOpcion(pPropietario);
                break;
            default:
                break;
        }
    } while (opc != 0);
    return 0;
}
