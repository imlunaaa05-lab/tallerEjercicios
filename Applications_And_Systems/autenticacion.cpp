#include <iostream>
#include <string>
#include "interfaz_applications.h"
using namespace std;

void sistemaAutenticacion() {
    string usuarioCorrecto = "admin";
    string claveCorrecta = "1234";

    string usuario, clave;

    cout << "\n--- SISTEMA DE AUTENTICACION ---\n";
    cout << "Usuario: ";
    cin >> usuario;
    cout << "Clave: ";
    cin >> clave;

    if (usuario == usuarioCorrecto && clave == claveCorrecta)
        cout << "Acceso concedido.\n";
    else
        cout << "Acceso denegado.\n";
}
